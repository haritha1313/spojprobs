#include <iostream>
#define MAX 10000009
int primes[10000009];
using namespace std;

int main() {
	int t;
	cin>>t;
	long long int arr[MAX],n;
	arr[0]=arr[1]=0;
	for(int i=2;i<=10000000;i++)
	{
		if(!primes[i])
		{
			for(int j=i+i;j<=10000000;j=j+i)
			{
				if(!primes[j])
				{
					primes[j]=i;
				}
			}
			arr[i]=arr[i-1]+i;
			
		}
		else
		{
			arr[i]=arr[i-1]+primes[i];
		}
	}
	while(t--)
	{
		cin>>n;
		cout<<arr[n]<<"\n";
	}
	return 0;
}
