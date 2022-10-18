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

Node *deleteNodeRec(Node *head, int pos) {
    if(head == NULL)
        return NULL ;
    
    if(pos == 0){
        return head->next;
    }
    head->next=deleteNodeRec(head->next , pos-1);
    return head;
 	
}
