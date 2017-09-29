#include <iostream>
using namespace std;

int lds(int arr[], int n,int mode)
{
	int lds[n];
	int max=0;
	for(int i=0;i<n;i++)
	{
		lds[i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]<arr[j]&&lds[i]<lds[j]+1)
			lds[i]=lds[j]+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(lds[i]>max)
		max=lds[i];
	}
	
	if(mode==0)
	{
		return lds[n-1];
		
	}
	else
	{
		return max;
	}
	
}

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int arre[n],farr[m+1],sarr[n-m-1];
		for(int i=0,j=0;i<n;i++)
		{
			cin>>arre[i];
			if(i<=m)
			{
				farr[i]=arre[i];
			}
			else
			{
				sarr[j++]=arre[i];
			}
		}
		cout<<max(lds(arre,n,1),lds(farr,m+1,0)+lds(sarr,n-m-1,1));
		cout<<"\n";
	}
	return 0;
}
