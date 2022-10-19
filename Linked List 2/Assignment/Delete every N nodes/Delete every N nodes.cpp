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
Node *skipMdeleteN(Node *head, int M, int N)
{
	Node * temp = new Node(-1);
    Node * prev = temp ;
    prev->next = head;
    while (head != NULL){
        for(int i = 0; (i<M) && (head!=NULL) ; i++){
            prev = head;
            head = head->next;
        }
        for(int i = 0 ; (i<N)&& (head!=NULL) ; i++){
			head = head->next;	
        }
        prev ->next = head;
    }
    return temp->next;
}
