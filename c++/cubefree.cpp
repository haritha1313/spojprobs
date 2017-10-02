#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t,n,arr[1000001];
	for(ll i=0;i<=1000000;i++)
	arr[i]=1;
	arr[0]=0;
	for(ll i=2;i<=100;i++)
	{
		ll k=i*i*i;
		for(ll j=k;j<=1000000;j=j+k)
		{
			arr[j]=0;
		}
	}
	ll q=1;
	for(ll i=1;i<=1000000;i++)
	{
		if(arr[i]==1)
		{
			arr[i]=q++;
		}
	}
	// for(ll i=1;i<=1000000;i++)
	// cout<<i<<": "<<arr[i]<<" ";
	cin>>t;
	ll num=t;
	while(t--)
	{
		cin>>n;
		
		if(arr[n])
		{
			cout<<"Case "<<num-t<<": "<<arr[n]<<"\n";
		}
		else
		{
			cout<<"Case "<<num-t<<": Not Cube Free\n";
		}
	}
	return 0;
}
