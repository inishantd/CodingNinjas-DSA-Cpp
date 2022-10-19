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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
       Node* fH = NULL;
       Node* fL = NULL;
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head2->data >= head1->data){
        fH = fL = head1;
        head1  = head1->next;
        
    }
    else if(head1->data > head2->data){
        fH = fL = head2;
        head2 = head2->next; 
    }
    while(head1 != NULL && head2 != NULL){
        if(head1->data > head2->data){
            fL->next = head2;
            fL=fL->next;
            head2 = head2->next;
        }
        else {
            fL->next = head1;
            fL=fL->next;
            head1 = head1->next;
        }
      }
    if(head2==NULL){
         fL->next = head1;
    }
    if(head1==NULL){
        fL->next = head2;
    }
    return fH;
}
Node *midPoint(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast !=NULL && fast->next!=NULL)  {
      slow = slow->next;
        fast = fast->next->next;
 }
    return slow;
}
Node *mergeSort(Node *head)
{
	if(head==NULL || head->next == NULL){
        return head;    
    }
    Node* mid = midPoint(head);
    Node* headp1 = head;
    Node* headp2 = mid->next;
    mid->next = NULL;
    
    Node* head1 = mergeSort(headp1);
    Node* head2 = mergeSort(headp2);
    
    Node* HEAD = mergeTwoSortedLinkedLists(head1, head2);
    return HEAD;
}
