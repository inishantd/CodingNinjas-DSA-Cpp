class Queue {
	// Define the data members
    Node * head;
    Node * tail; 
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
    	tail = NULL;
        size = 0;
	}
	

	int getSize() {
		// Implement the getSize() function
     	 
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
      return size == 0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
       
        
  	Node *newNode = new Node (data);
        if(head == NULL){
        	head = newNode; 
            tail = newNode;
        }
        else {
		tail -> next = newNode;
        tail = newNode;
        }
        size ++ ;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(head == NULL){
            return -1;
        }
        if(isEmpty()){
            return 0;
        }
        int ans = head -> data;
        Node * temp = head;
        head = head -> next ;
        delete temp ;
        size --;
        return ans ;
    }

    int front() {
        // Implement the front() function
           if(isEmpty()){
               return -1;
           }
    return head->data;
    }
};