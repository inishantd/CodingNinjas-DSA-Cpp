/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
if(root == NULL){
        return ;
    }
   // cout<< root-> data <<":";
    queue <BinaryTreeNode<int> *> q;
    q.push(root);
    while(q.size()!= NULL){
        BinaryTreeNode<int>* front = q.front();
        q.pop();
         cout<< front-> data <<":";
        if(front->left){
            cout<< "L"<<":"<< front->left-> data<<",";
            q.push(front ->left);
        }
        else if (!front-> left){
            cout<< "L:"<< "-1"<< ",";
        }
        if(front -> right){
			cout<<"R:"<< front-> right-> data;
            q.push(front->right);
            }
        else if(!front-> right){
            cout<< "R:"<< "-1";
        }
       cout<< endl;
    }
    
}
