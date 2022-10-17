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


    // Write your code here.
    Node *deleteNode(Node *head, int pos)
{
  if(head == NULL)
      return NULL;
    if(pos == 0)
        return head->next ;
    Node *curr = head ;
    int cp = 0;
    while(curr != NULL && cp <pos-1){
        curr = curr->next;
    cp++;
    }
    if(curr == NULL || curr->next ==NULL)
        return head;
    curr->next = curr->next -> next;
    return head;
    
}
