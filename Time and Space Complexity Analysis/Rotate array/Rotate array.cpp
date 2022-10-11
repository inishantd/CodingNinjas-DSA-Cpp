void reverse(int input[] , int start , int end){
    while(start<end){
        swap(input[end] , input[start]);
        start++; 
        end--;
    }
}

void rotate(int *input, int d, int n)
{
   if(d>=n && n!=0)
   {
       d = d%n;
   }
    reverse(input , 0 , n-1);
    reverse(input , 0 , n-1-d);
    reverse(input , n-d , n-1);
    
}
