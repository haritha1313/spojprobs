#include <bits/stdc++.h>
using namespace std;

int las(int arr[], int n, int arry[])
{
	int las[n];
	int max=0;
	for(int i=0;i<n;i++)
	{
		las[i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]!=arr[j]&&arry[i]>arry[j]&&las[i]<las[j]+1)
			las[i]=las[j]+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(las[i]>max)
		max=las[i];
	}
	
	return max;
	
}

int main() {
		int n,a;
		cin>>n;
		int arre[n],arry[n];
		for(int i=0;i<n;i++)
		{
			cin>>a;
			arry[i]=abs(a);
			if(a<0)
			{
				arre[i]=-1;
			}
			else
			{
				arre[i]=1;
			}
		}
		cout<<las(arre,n,arry);
		cout<<"\n";
	
	return 0;
}
