#include <iostream>

using namespace std;
int main() {
	long long int t,ans,r,i=0;
	cin>>t;
	while(t--)
	{	i++;
		cin>>r;
		ans=4*r*r;
		cout<<"Case "<<i<<": "<<ans<<".25\n";
	}
	return 0;
}
