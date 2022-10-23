bool isBalanced(string expression) 
{
    // Write your code here
    bool ans = true;
    int count = 0;
    for (int i = 0; i<expression.length() ; i++){
        if(expression[i] == '('){
            count++;
        }
        else {
            count--;
        }
        if(count <0){
            ans = false ;
            break;
        }
    }
    if(count != 0){
        ans = false ;
    }
    return ans;
}
