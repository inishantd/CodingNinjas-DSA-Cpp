int arrayRotateCheck(int *input, int size)
{
    int pos = 0; int min = input[0];
    for(int i = 0; i<size ; i++){
        if(min>input[i])
        {
            min = input[i];
            pos = i;
        }
        
        
    }
    return pos;
 
}
