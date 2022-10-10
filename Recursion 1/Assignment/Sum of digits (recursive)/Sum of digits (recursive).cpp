int sumOfDigits(int n) {
    // Write your code here
    if( n == 0)	return 0;
    return sumOfDigits(n/10) + (n%10);

}

