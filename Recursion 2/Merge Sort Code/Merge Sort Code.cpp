void Merge(int input[],int start,int end){
	int size = end - start + 1;
    int k = 0;
    int sorted[size];
    int mid = (start + end)/2;
    int i = start;
    int j = mid + 1;
    while(i<=mid  && j <=end)
    {
		if(input[i] <= input[j]){
			sorted[k] = input[i];
            i++;
            k++;
        }
        if(input[i] > input[j]){
            sorted[k] = input[j];
            k++;
            j++;
        }
    }
    while(i<= mid){
        sorted[k] = input[i];
        k++;
        i++;
    }
    while(j<=end){
        sorted[k] = input[j];
        k++;
        j++;
    }
	int d = 0;
    for(int i=start; i<=end; i++){
			input[i] = sorted[d++];
    }

}

void mergeSort(int input[], int start, int end){
	if (start >= end ){
        return;
    }
    int mid = (start + end)/2;
    mergeSort(input, start, mid);
    mergeSort(input, mid + 1, end);
    Merge(input, start , end);
}

void mergeSort(int input[], int size){
	// Write your code here
        if( size == 0 || size == 1)
            return;
    mergeSort(input, 0 , size - 1);
}
