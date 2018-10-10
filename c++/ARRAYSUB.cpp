#include <bits/stdc++.h>
using namespace std;

void printKMax(long int arr[], int n,long int k)
{
    int j, max;
 
    for (int i = 0; i <= n-k; i++)
    {
        max = arr[i];
 
        for (j = 1; j < k; j++)
        {
            if (arr[i+j] > max)
               max = arr[i+j];
        }
        printf("%d ", max);
    }
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin>>n;
	long int arr[n],k;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	printKMax(arr,n,k);
	return 0;
}
