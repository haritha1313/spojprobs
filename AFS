#include <iostream>
#define max 1000000
#define ll long long int
using namespace std;


int main() {
	ll big[max], small[max],num,n;
	for(ll i=0;i<max;i++)
		big[i]=1;
	for(ll i=2;i<max;i++)
	{
		ll j=2;
		while((num=i*j)<max)
		{
			big[num]+=i;
			j++;
		}
		
	}
	small[0]=small[1]=0;
	for(int i=2;i<max;i++)
	small[i]=small[i-1]+big[i];
	ll t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<small[n]<<"\n";
	}
	return 0;
}
