#include<algorithm>
#include<queue>


void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    
        if(root == NULL){
        return;
    }
    
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int levelCount = 0;
    
    while(!q.empty()){
        int size = q.size();
        vector<int> curr;
		for(int i = 0; i<size; i++){
            BinaryTreeNode<int> * front = q.front();
        	q.pop();
            curr.push_back(front->data);
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right); 
            }
        }
        
		if(levelCount % 2 != 0){
        	reverse(curr.begin() , curr.end());    
        }
        
        for(int i = 0; i<curr.size(); i++){
            cout<<curr[i]<<" ";
        }
        cout<<endl;
        levelCount++;
    }

}
