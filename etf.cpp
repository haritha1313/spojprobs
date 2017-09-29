#include <iostream>
using namespace std;

int main() {
	long long int n,t,res;
	cin>>t;
	while(t--)
	{
		cin>>n;
		float res=n;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0){
			while(n%i==0)
			n=n/i;
			res=res*(1.0-(1.0/(float)i));}
		}
		if(n>1)
		res=res*(1.0-(1.0/(float)n));
		cout<<(int)res<<"\n";
	}
	return 0;
}
