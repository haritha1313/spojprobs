#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,c,first,last,max,u,mid;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		first=arr[0];last=arr[n-1];max=-1;
		while(first<last){
		mid=first+(last-first)/2;
		int p=arr[0];
		int cows=1;
		for(int i=1;i<n;i++)
		{
			if(arr[i]-p>=mid)
			{
				p=arr[i];
				cows++;
				if(cows==c)
				{u=1;break;}
			}
			u=0;
		}
		if(u==1)
		{
			if(mid>max)
			max=mid;
			first=mid+1;
		}
		else 
		last=mid;
		}
		cout<<max<<"\n";
	}
	return 0;
}
