#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		double s=(a+b+c+d)/2;
		double ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2f",ans);
		cout<<"\n";
	}
	return 0;
}
