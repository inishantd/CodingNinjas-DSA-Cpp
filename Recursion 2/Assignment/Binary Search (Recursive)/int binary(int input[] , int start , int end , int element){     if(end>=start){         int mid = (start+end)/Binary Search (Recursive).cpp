int binary(int input[] , int start , int end , int element){
    if(end>=start){
        int mid = (start+end)/2;
    if(input[mid] == element){
        return mid;
    }
        else if(input[mid] < element){
		return binary(input , mid+1, end , element);
        }
        else if(input[mid]> element){
            return binary (input , start , mid-1 , element);
        }
        
    }
    else {
            return -1;
        }
}
int binarySearch(int input[], int size, int element) {
 	binary(input , 0 , size-1 , element);
}
