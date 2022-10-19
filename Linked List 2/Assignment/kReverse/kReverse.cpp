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

Node* reverse(Node *head, Node *tail)
{
    if((head == tail)||(head == NULL))
    {
  		return head;
    }	
    
    Node *temp = head, *prev = NULL, *n = head->next;
    
    while(temp != NULL)
    {
        temp->next = prev;
        prev = temp;
        temp = n;
        
        if(n != NULL)
        {
            n = n->next;
        }
    }
    head = prev;
    return head;
}

Node* kReverse(Node *head, Node *tail, int k, int count)
{
    if(head == NULL)
    {
      //Base Case
        return NULL;
    }
    
    while(count != k)
    {
        if(tail->next == NULL)
        {
            break;
        }
        
        tail = tail->next;
        count++;
    }
    
    Node *head2 = tail->next;
    tail->next = NULL;
    
    Node *t = head;
    head = reverse(head, tail);

    head2 = kReverse(head2, head2, k, 1);
    
	t->next = head2;    
   
    return head;
}

Node* kReverse(Node *head, int k)
{
	//Write your code here
    
    if((head == NULL)||(k == 0))
    {
        return head;
    }
    if((head->next == NULL)||(k == 1)) // single element
    {
        return head;
    }
    
    Node *tail = head;
    int count = 1;
    
    head = kReverse(head, tail, k, count);
    
    return head;
}
