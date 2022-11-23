int f = 1;
int solve(BinaryTreeNode<int> *root){
    if(!root)
        return 0;
    int l = solve(root->left);
    int r = solve(root->right);
    if(abs(l-r)>1) 
        f = 0;
    return max(l , r)+1;
}


bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
    f = 1;
    solve(root);
    return f;
    
}
