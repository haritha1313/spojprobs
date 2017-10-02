#include <iostream>

using namespace std;
int main() {
	long long int n,num,ans=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{scanf("%lld",&num);
	ans=ans^num;
	}
	cout<<ans;
	return 0;
}
