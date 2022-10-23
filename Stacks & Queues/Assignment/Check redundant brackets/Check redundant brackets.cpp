#include<stack>

bool checkRedundantBrackets(string expression) {
    int count = 0;
  stack<int> s;
  int i = 0;
//   while(i<=expression.size()){
//     if(expression[i]=='('){
//       s.push(expression[i]);
//     }
//     else if(expression[i]  !=')'){
//       s.push(expression[i]);
//       count++;
//     }
//     else if(expression[i] == ')'){
//      if(count==0||count == 1){
//        return true;
//       }
//      else{
//        while(s.top()!='('){
//          s.pop();
//          count--;
//        }
//        if(s.top() == '('){
//          s.pop();
//        }
//      }
     
//     }
//     i++;
//   }
    while(expression[i] != '\0')
    {
        if(expression[i] == ')')
        {
            int count = 0;
            while(s.top()!='(' )
            {
                count++;
                s.pop(); 
            }
            s.pop();
            if(count == 0 || count == 1){
                return true;
            }
            i++;
        }
        else
        {
            s.push(expression[i]);
            i++;
        }
    }
    
  return false;



    }
