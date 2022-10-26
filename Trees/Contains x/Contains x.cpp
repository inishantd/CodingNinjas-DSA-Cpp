bool isPresent(TreeNode<int>* root, int x) {
   if(root->data == x)
   {
       return true;
   }
    int ans=false;
    for(int i=0; i<root->children.size(); i++){
	bool smallans = isPresent(root->children[i],x);
        // if(ans == true){
        //     return true;
        // }
        if( smallans==true)
            ans=smallans;
    }
    return ans;
}
