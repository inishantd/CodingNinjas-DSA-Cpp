#include <iostream>
#include <string>
using namespace std;

// void helper(string input , string output){
//     if(input.empty()){
//         cout<<output<<endl;
//         return ;
//     }
// }

// void printPermutations(string input){
// 	helper(input , output)


void helper(string input, string output)
{
    if (input.empty())
    {
        cout << output << endl;
        return;
    }
    for (int i = 0; input[i] != '\0'; i++)
    {
        helper(input.substr(0, i) + input.substr(i + 1), output + input[i]);
    }
}

void printPermutations(string input)
{

    string output;
    helper(input, output);
}
