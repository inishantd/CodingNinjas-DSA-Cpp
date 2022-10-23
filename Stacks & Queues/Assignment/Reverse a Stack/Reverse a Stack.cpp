void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.size()==0)
    {
        return;
    }
    int x=input.top();
    input.pop();
    reverseStack(input,extra);
    int len = input.size();
    for(int i=0;i<len;i++)
    {
        extra.push(input.top());
        input.pop();
    }
    input.push(x);
    len = extra.size();
    for(int i=0;i<len;i++)
    {
        input.push(extra.top());
        extra.pop();
    }
}
