#include <string>
using namespace std;

int keypad(int num, string output[]){
  string list[10] = {"" , "" , "abc" , "def", "ghi" , "jkl" , "mno" , "pqrs" , "tuv", "wxyz"};
    
    if(num == 0){
        output[0] = "";
        return 1;
    }
    int lastNum = num % 10;
    int smallNumber = num /10;
    string smallOutput[500];
    int smallCount = keypad(smallNumber , smallOutput);
    int k =0 ;
	string alpha = list[lastNum];
    for(int i = 0; i<alpha.size() ; i++){
        for(int j=0; j<smallCount ; j++){
            output[k] = smallOutput[j] + alpha[i];
            k++;
        }
    }
    return k;
}
