#include<stack>

int countBracketReversals(string input) {
	// Write your code here
     int len = input.length();
 
    // length of expression must be even to make
    // it balanced by using reversals.
    if (len%2)
       return -1;
    
    
    stack<char> s;
    for (int i=0; i<len; i++)
    {
        if (input[i]=='}' && !s.empty())
        {
            if (s.top()=='{')
                s.pop();
            else
                s.push(input[i]);
        }
        else
            s.push(input[i]);
    }
 
    // Length of the reduced expression
    // red_len = (m+n)
    int red_len = s.size();
 
    // count opening brackets at the end of
    // stack
    int n = 0;
    while (!s.empty() && s.top() == '{')
    {
        s.pop();
        n++;
    }
 
    // return ceil(m/2) + ceil(n/2) which is
    // actually equal to (m+n)/2 + n%2 when
    // m+n is even.
    return (red_len/2 + n%2);
    
}
