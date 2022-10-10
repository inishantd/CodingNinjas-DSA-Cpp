int countZeros(int n) {
		if (n == 0) return 1;
    	if ( n <= 9) return 0;
    int smallans = countZeros(n/10);
    if(n%10 == 0){
		return smallans + 1;
    }
    return smallans;
}
