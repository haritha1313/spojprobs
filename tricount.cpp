#include <iostream>
using namespace std;

int main() {
	long long int n,t;
	cin>>t;
	while(t--)
	{
		long long int sum=0;
		cin>>n;
		sum=(n*(n+2)*(2*n+1)/8);
		cout<<sum<<"\n";
	}
	return 0;
}

