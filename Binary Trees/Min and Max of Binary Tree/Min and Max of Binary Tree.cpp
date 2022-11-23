#include<algorithm>
#include<climits>
// void trav(BinaryTreeNode<int> *root, int &minx , int &maxx){
//     if(root == NULL){
//         return ;
//     }
//     minx = min(minx , root->data);
//     maxx = min(maxx , root ->data);
    
//     trav(root-> left ,minx , maxx);
//     trav(root-> right , minx , maxx);
// }

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    
//     if(root==NULL)
//     {
// 		pair<int, int> p = make_pair(INT_MAX, INT_MIN);
        
//         return p;
//     }
// 	// Write your code here
//     int minx ;
//     int maxx ;
    
//     trav(root , minx , maxx);
//     pair<int , int > p;
//     p.min = minx;
//     p.max = maxx;
    
//     return p;
    
    
    
    if(root==NULL)
    {
		pair<int, int> p = make_pair(INT_MAX, INT_MIN);
        
        return p;
    }
   
    pair<int, int> l = getMinAndMax(root->left);
    pair<int, int> r = getMinAndMax(root->right);
    
    pair<int, int> ans = make_pair(INT_MAX, INT_MIN);
    int fmin = min(root->data,min(l.first, r.first));
    int fmax = max(root->data,max(l.second, r.second));
    
    
    ans.first = fmin;
    ans.second = fmax;
    
    return ans;
    
}
