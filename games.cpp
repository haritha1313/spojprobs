#include <iostream>
#include<string>
#include<math.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
	if(b!=0)
	return gcd(b,a%b);
	else
	return a;
}
//long long int gcd(long long int x,long long int y){return y>0?gcd(y,x%y):x;}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string num;
		long long int ans=0;
		cin>>num;
		int x=0,dec=0;
		for(int i=num.size()-1;i>=0;i--)
		{
			if(num[i]!='.')
			x++;
			else
			{
				dec=1;
				break;
			}
		}
		if(dec)
		{
			for(int i=0;i<num.size();i++)
			{
				if(num[i]!='.')
				ans=ans*10+num[i]-'0';
			}
			long long int f=pow(10,x);
			ans=f/gcd(ans,f);
		 cout<<ans<<"\n";
		}else cout<<1<<"\n";
	
		 
		//cout<<i<<"\n";
	}
	return 0;
}
