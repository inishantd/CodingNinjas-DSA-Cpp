int tripletSum(int *arr, int n, int tofind){
    sort(arr, arr + n);
    int summ = 0;
    for (int k = 0; k < n - 1; k++){
        int num = tofind - arr[k];
        int i = k + 1, j = n - 1;
        while (i < j){
          if(arr[i] + arr[j] == num){
              int b = 1 ;int c = j-1 ;
              i++;
              while (arr[c]== arr[c+1] and i<=c){
                  b++; 
                  c--;
              }
              summ +=b;
          }
            else if(arr[i]+arr[j]<num){
                i++;
            }
            else {
             j--;
            }
}
    }
    return summ;
}
