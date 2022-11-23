void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root == NULL)
        return;
    if(root->left != NULL && root->right != NULL)
    {
        printNodesWithoutSibling(root->left);
        printNodesWithoutSibling(root->right);
        
    }
    else if(root->right != NULL)
    {
	cout<< root->right->data<< " ";
        printNodesWithoutSibling(root->right);
        
    }
    else if(root->left!= NULL)
    {
	cout<< root->left->data<<" ";
        printNodesWithoutSibling(root->left);
    }
	
    
}
