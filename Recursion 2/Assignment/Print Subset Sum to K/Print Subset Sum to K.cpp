void fun(int *input, int size, int *output , int len ,int k){
    if(size==0){
        int sum =0;
        for(int i = 0; i<len ;i++){
            sum += output[i];
        }
		if(sum==k){
            for(int i = 1; i<=len ;i++)
            {
            	cout<<output[i-1]<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    fun(input+1,size-1,output,len,k);
    output[len] = input[0];
    fun(input+1,size-1,output,len+1,k);
}

void printSubsetSumToK(int input[], int size, int k) {
    int output[1000];
 
    fun(input,size,output,0,k);
}
