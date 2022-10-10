#include <iostream>
#include <string>
using namespace std;

void print(int num , string out){
    if(num == 0){
        cout<<out<<endl;
        return ;
    }
    string s[] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    string input = s[num%10];
    for(int i=0; i<input.size() ; i++){
        print(num/10 , input[i] + out);
    }
}

void printKeypad(int num){
  print(num , "");
}
