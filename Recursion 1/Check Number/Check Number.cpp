bool checkNumber(int input[], int size, int x) {
	if ( size == 0) return false; 
     if(input[size] == x) return true;
     checkNumber(input, size - 1, x);
}
