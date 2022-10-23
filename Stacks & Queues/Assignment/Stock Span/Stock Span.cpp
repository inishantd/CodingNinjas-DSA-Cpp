#include<stack>
using namespace std;

int* stockSpan(int *price, int size)  {
	// Write your code here
  int *ans = new int[size];
    stack<int> s;
    ans[0] = 1;
    s.push(0);
    for(int i = 1 ; i<size; i++){
        while(!s.empty() && price[i] >price[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = i+1;
        }
        else{
            ans[i] = i - s.top();
        }
        s.push(i);
    }
    return ans ;
}
