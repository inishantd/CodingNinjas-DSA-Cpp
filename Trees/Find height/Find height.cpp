int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
    {
        return 0 ;
    }
    int maxheight=0 ;
    for(int i=0 ;i<root->children.size();i++)
    {
        int h=getHeight(root->children[i]);
        if(maxheight<h)
            maxheight=h ;
    }
    return maxheight+1;
}
