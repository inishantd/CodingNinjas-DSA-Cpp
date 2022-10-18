/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* insertNode(Node *head, int i, int data) {
 if(head==NULL){ 
    return  NULL;
     }
    if(i==0){
         Node*newnode=new Node(data);
        newnode->next=head;
        return newnode;
    }
    Node* a=insertNode(head->next,i-1,data);
    head->next=a; 
   return head;    
}
