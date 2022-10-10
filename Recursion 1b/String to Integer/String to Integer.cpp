#include <string.h>
#include <cmath>
int stringToNumber(char input[])
{
    int n = strlen(input);
    
    // base case
    if (n == 0)
        return 0;
    
    // small Calc
    char ch = input[0];
    int num = ch - '0';
    int ans = num*pow(10, n - 1);
    
    // recursive call
    int smallAns = stringToNumber(input+1);
    
	return ans + smallAns;
}
