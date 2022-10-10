#include <string.h>
using namespace std;

void printAllPossibleCodes(string input, string output="") {
   if(input.size()==0)
   {
       cout<<output<<endl;   
    	return;
   }
    if(input.size()==1)
    {
        char ch=(input[0]-48)+96;
        output =output + ch;
        cout<<output << endl;
        return;
    }
     char c= (input[0] - '0') - 1 + 'a';
    printAllPossibleCodes(input.substr(1), output+c);
    
    
     int d=(input[0] - 48)*10 + (input[1] -48);
           if(d>=10&&d<=26)
           {
               char ch = d-1+'a';
               printAllPossibleCodes(input.substr(2),  output+ch);
           }
}
