#include <bits/stdc++.h>
using namespace std;

int main() {
	 long long int n,a,b,lo,hi,mid,x,y,z,item,temp;
	cin>>n;
	while(n--)
	{
		cin>>a;
		long long int arr1[a];
		for(int i=0;i<a;i++)
		{
			cin>>arr1[i];
		}
		cin>>b;
		long long int arr2[b];
		for(int i=0;i<b;i++)
		{
			cin>>arr2[i];
		}
long long int min=INT_MAX;
for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
if(abs(arr1[i]-arr2[j])<min)
min=abs(arr1[i]-arr2[j]);

cout<<min<<"\n";
}
	return 0;
}
