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

void printIthNode(Node *head, int i){
    int position = 0;
    Node *temp = head;
    while(temp != NULL && position < i){
		position ++;
        temp = temp -> next;
    }
    if(temp != NULL){
		cout<<temp -> data <<endl;
    }
}
