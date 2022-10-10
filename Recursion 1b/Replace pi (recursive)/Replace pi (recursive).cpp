// Change in the given string itself. So no need to return or print anything
#include<string.h>
void replacePi(char input[]) {
    if(input[0]=='\0')
       return;
    
   replacePi(input+1);
    if(input[0]=='p'&&input[1]=='i')
    {
        int l=strlen(input);
        int i=l;
        while(i>=2)
        {
            input[i+2]=input[i];
            i--;
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        replacePi(input+4);
    }

}


