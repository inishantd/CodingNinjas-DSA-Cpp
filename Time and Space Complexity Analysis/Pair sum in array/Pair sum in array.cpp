#include<algorithm>


int pairSum(int *arr, int n, int num){
    sort(arr, arr + n);
    int i = 0, j = n - 1, summ = 0;
    while (i < j){
        if (arr[i] + arr[j] == num){
            int b = 1, c = j - 1;
            // cout<<"i : "<<i<<" j : "<<j<<" Sum : "<<summ<<endl;
            i++;
            while (arr[c] == arr[c + 1] and i<=c){
                b++;
                c--;
            }
            // cout<<"a : "<<a<<" b: "<<b<<endl;
            summ += b;
        }
        else if (arr[i] + arr[j] < num){
            i++;
        }
        else{
            j--;
        }
    }
    return summ;
}
