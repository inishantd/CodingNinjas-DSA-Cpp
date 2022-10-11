#include<algorithm>

int findDuplicate(int *arr, int n)
{
	sort(arr, arr+n);
        for(int i=0; i<n; i++)
        {
		if(arr[i] == arr[i+1])
        {
		return arr[i];
        }
        }
}
