#include <bits/stdc++.h>
#define PI (3.141592653589793)
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,f;
		cin>>n>>f;
		double arr[n];
		double sum=0.0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			arr[i]=(arr[i]*arr[i]*PI);
		}
		sum=sum*PI;
		double lo=0.0,mid,hi;
		hi=(double)(INT_MAX);
		while(lo<hi)
		{
			double sum=0;
			mid=lo+(hi-lo)/2;
			for(int i=0;i<n;i++)
			{
				sum+=(int)(arr[i]/mid);
			}
			
			// if(sum==f+1)
			// {
			// 	lo=mid;
			// 	break;
			// }
			if(sum<f+1)
			{
				hi=mid-0.0000001;
			}
			else
			{
				lo=mid+0.0000001;
			}
		}
		printf("%.4f\n",lo);
	}
	return 0;
}
