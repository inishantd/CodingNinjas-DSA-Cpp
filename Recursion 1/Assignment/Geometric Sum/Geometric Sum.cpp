double geometricSum(int k) {
    if(k==0)
    {
        return 1;
	}
    return geometricSum(k-1)+pow(2,-k);
    

}
