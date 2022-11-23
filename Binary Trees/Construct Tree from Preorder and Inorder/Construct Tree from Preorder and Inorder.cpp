int linearsearch(int *a , int n, int x){
    if(n == 0){
        return -1;
    }
    if(a[0] == x){
        return 0;
    }
    return 1+ linearsearch(a+1 , n-1 , x);
}


BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    if(preLength == 0){
	return NULL;
    }
    if(inLength == 0){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[0]);
    int ri = linearsearch(inorder , inLength , preorder[0]);
    int leftLength = ri;
    int rightLength = inLength -(ri+1);
    root-> left = buildTree(preorder+1 , leftLength, inorder , leftLength );
    root-> right = buildTree(preorder+ri+1 , rightLength, inorder+ri+1 , rightLength );
    
    return root;
}
