vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    Node<int > * head = NULL;
    Node<int > * tail = NULL;
    vector <Node<int>*>output;
    if(root == NULL)
    {
	return output;
    }
    while(q.size() != 0)
    {
	BinaryTreeNode<int> * front = q.front();
        q.pop();
        if(front!= NULL)
        {
		Node<int>*newNode = new Node <int>(front->data);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        if(front == NULL)
        {
            if(q.empty())
            {
                output.push_back(head);
                break;
            }
            else{
                output.push_back(head);
                head = NULL;
                tail = NULL;
                q.push(NULL);
            }
        }
        if(front != NULL)
        {
            if(front->left != NULL)
            {
			q.push(front->left);
            }
            if(front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
    return output;
}
