BinaryTreeNode<int>* buildTreeHelper(int* in, int* post, int inS, int inE, int postS, int postE){
   if(inS>inE)
        return NULL;
    int rootData=post[postE];
    int rootIndex = -1;
    for(int i=inS;i<=inE;i++){
        if(in[i] == rootData){
            rootIndex = i;
            break;
        }
    } 
    int LInS=inS;//obvious are of inorder
    int LInE=rootIndex-1;
    int LPostS=postS;//
    //LPostE-LPostS = LInE-LInS; //equating count of nodes of left subtree 
    int LPostE=LInE-LInS+LPostS;
    int RPostS=LPostE+1;
    int RPostE=postE-1;
    int RInS=rootIndex+1;//
    int RInE=inE;//
               
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left=buildTreeHelper(in,post,LInS,LInE,LPostS,LPostE);
    root->right=buildTreeHelper(in,post,RInS,RInE,RPostS,RPostE);
    return root;
}

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    return buildTreeHelper(inorder, postorder, 0, inLength - 1, 0, postLength - 1);
}
