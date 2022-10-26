TreeNode<int>* maxDataNode(TreeNode<int>* root) {
	if(root == NULL){
        return root;
    }
    TreeNode<int> * currmax = root;
    for(int i=0; i<root->children.size();i++){
        TreeNode<int>* shortans = maxDataNode(root->children[i]);
        if(shortans -> data > currmax -> data)
            currmax = shortans;
    }
    return currmax;
}
