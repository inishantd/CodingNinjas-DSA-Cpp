class Stack {
	// Define the data members
   Node * head; 
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

	
    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
      return size == 0;
    }

    void push(int element) {
       Node * n = new Node(element);
        n->next = head;
        head = n;
        size++;
    }

    int pop() {
        if(head==NULL)return -1;
        // Implement the pop() function
        int x = head -> data;
        Node * temp = head;
        head = head ->next; 
        delete temp ;
        size--;
        return x;
    }

    int top() {
        // Implement the top() function
        if(isEmpty())
            return -1;
        return head->data;
    }
};
