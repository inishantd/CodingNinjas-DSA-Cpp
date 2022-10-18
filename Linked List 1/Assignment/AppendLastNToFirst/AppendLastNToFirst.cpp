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
Node *appendLastNToFirst(Node *head, int n)
{
    if(head==NULL || n==0){
        return head;
    }
		 int c=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    int len=c;
    int i=1;
    int count=len-n;
    temp=head;
    Node *prev=NULL;
    while(temp!=NULL && i<=count){
        prev=temp;
        temp=temp->next;
        i++;
    }
    Node *temp1=temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    if(prev!=NULL)
    prev->next=NULL;
    return temp1;
}
