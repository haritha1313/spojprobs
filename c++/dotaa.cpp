#include <iostream>
using namespace std;

int main() {
	int t,n,m,d,h;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>d;
		int val=0;
		for(int i=0;i<n;i++)
		{
			cin>>h;
			val+=((h-1)/d);
		}
		if(val>=m)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
