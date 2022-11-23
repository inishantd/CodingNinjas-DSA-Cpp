#include <queue>

void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL)
        return ;
    
    queue<BinaryTreeNode<int> *> q;
    
    
    q.push(root);
    q.push(NULL);
    
    
    while (q.size() != 0 )
    {
        BinaryTreeNode<int> * curr = q.front();
        q.pop();
        
        if(curr!=NULL)
        {
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        else if(curr==NULL)
        {
            if(q.empty()) break;
            else
            {
                cout<<endl;
                q.push(NULL);
            }
        }
        /*
        if(curr == NULL)
        {
            if(q.empty()) break;
		q.push(NULL);
            cout<<endl;
        }
        else if(curr!=NULL){
            if(curr ->left!=NULL)
                q.push(curr ->left);
            
            if(curr->right!=NULL);
            q.push(curr->right);
            
            cout<< curr->data<< " ";
        }
        */
    }
    
}
