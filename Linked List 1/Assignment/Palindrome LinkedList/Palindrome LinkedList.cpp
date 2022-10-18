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

*****************************************************************/int length(Node *head)
{
    
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

bool isPalindrome(Node *head)
{
    
    int utility[10000], utility2[10000];
    int index = 0;
    Node *temp = head;
    int lengthLL = length(temp);

    while(temp != NULL){

        utility[index] = temp -> data;
        index++;
        temp = temp -> next;
    }

    for(int i = 0; i < lengthLL; i++){

        utility2[i] = utility[lengthLL - i - 1];
    }

    for(int i = 0; i < lengthLL; i++){

        if(utility[i] != utility2[i]){
            return false;
        }
    }
    return true;
}
