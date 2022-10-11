int findUnique(int *arr, int n) {
    // Write your code here
    int XOR=0;
        for (int i = 0; i < n; i++) {
            XOR=XOR ^ arr[i]; 
        }
        return XOR; 
}
