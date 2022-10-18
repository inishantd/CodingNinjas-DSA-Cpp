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

int findNode(Node *head, int n){
    int index = 0;              
	Node * temp = head;

	while(temp!=NULL){
		if(temp-> data == n){         
		
			return index;               
		}
		temp = temp->next;
		index++;
	}   
	
	return -1; 
}
