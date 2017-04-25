#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int sum=0;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<n;j++)
		cin>>b[j];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0; i<n;i++)
		sum+=(a[i]*b[i]);
		cout<<sum<<"\n";
	}
	return 0;
}
