#include <iostream>
#define mod 1000000007
using namespace std;

int main() {
	int findp[50001];
	long int primes[50001];
	for(long int i=0;i<50001;i++)
	{findp[i]=1;
	}
	for(long int i=2;i*i<50001;i++)
	{
		if(findp[i]==1)
		for(long int j=i+i;j<50001;j=j+i)
		findp[j]=0;
	}
	int q=0;
	for(long int i=2;i<=50000;i++)
	if(findp[i]==1)
	primes[q++]=i;
	long long int t,n;
	
		cin>>n;
		long long int ans=1;
		long long int num=n;
		long long int m=0;
		for(long long int i=0;primes[i]<=n;i++)
		{
				if(i>=5133)
				break;
				long long int x=0;
				num=n;
				while(num)
				{
				//	num=num/2;
					num=num/primes[i];
					x+=num;
				}
				if(i==0)
				cout<<primes[i]<<"^"<<x;
				else
				cout<<" * "<<primes[i]<<"^"<<x;
			
		}
		cout<<"\n";
	
	return 0;
}
