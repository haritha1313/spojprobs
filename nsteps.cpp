#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==b)
		{
			if(a%2==0)
			c=2*a;
			else
			c=((2*a)-1);
			cout<<c<<"\n";
		}
		else
		{
			if((a-b)==2)
			{
				if(a%2==0)
				c=a+b;
				else
				c=(a+b)-1;
				cout<<c<<"\n";
			}
			else
			cout<<"No Number\n";
		}
		
	}
}
