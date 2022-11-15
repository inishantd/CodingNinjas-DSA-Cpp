bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    
     if(root == NULL) {
        return false;
     }
    
    if(root->data == x){
        return true;
    }
   
    
    bool res1 = isNodePresent(root->left, x);
    if(res1){
        return true;
    }
    bool res2 = isNodePresent(root->right , x);
    return res2;
    
    }
