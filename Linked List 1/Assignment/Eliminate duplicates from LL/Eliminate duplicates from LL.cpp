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
Node *removeDuplicates(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    Node *curr = head ;
    while (curr != NULL){
        if((curr->next!=NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr ->next = next_next;
        }
        else{
            curr = curr->next;
        }
        
    }
    return head;
  
}
