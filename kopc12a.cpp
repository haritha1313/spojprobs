#include <bits/stdc++.h>
using namespace std;
long long int height(int h[], int c[],int n, int q)
{
	long long int sum=0,diff;
			for(int i=0;i<n;i++)
			{
				diff=abs(h[i]-q);
			
			sum+=(diff*c[i]);
			}
	return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int h[n],c[n],lo, hi,mid;
		for(int i=0;i<n;i++)
		cin>>h[i];
		for(int i=0;i<n;i++)
		cin>>c[i];
		lo=0;
		hi=INT_MAX;
		long long int a,b,d;
		long long int max=LLONG_MAX;
		while(lo<hi)
		{
			mid=lo+(hi-lo)/2;
			if(mid>0)
			a=height(h,c,n,mid-1);
			else
			a=INT_MAX;
			b=height(h,c,n,mid);
			d=height(h,c,n,mid+1);
			if(max==b)
			{
				break;
			}
			max=min(max,b);
			if(a<=b)
			{
				hi=mid;
			}
			else{
				lo=mid+1;
			}
		}
		cout<<max<<" ";
	}
	return 0;
}
