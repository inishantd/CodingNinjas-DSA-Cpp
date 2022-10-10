int subsetSumToK(int input[], int n, int output[][50], int k)
{
    if(n==0)
    {
        if(k==0)
        {
            output[0][0]=0;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int o1[1000000][50],o2[1000000][50],i,j;
    int s1=subsetSumToK(input+1,n-1,o1,k-input[0]);
    int s2=subsetSumToK(input+1,n-1,o2,k);
    for(i=0;i<s1;i++)
    {
        o1[i][0]++;
        output[i][0]=o1[i][0];
        output[i][1]=input[0];
        
    }
    for(i=0;i<s1;i++)
    {
        for(j=2;j<=o1[i][0];j++)
        {
            output[i][j]=o1[i][j-1];
        }
    }

    for(i=0;i<s2;i++)
    {
        for(j=0;j<=o2[i][0];j++)
        {
            output[i+s1][j]=o2[i][j];
        }
    }
    return s1+s2;
}
