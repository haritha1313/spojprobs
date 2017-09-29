#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string str;
		int a=0,b=0,c=0;
	cin>>n;
	int sum=0;
	while(n--)
	{
		
		cin>>str;
		if(str[0]=='1')
		{
			if(str[2]=='2')
			b++;
			else
			a++;
		}
		else
		c++;
	}
//	cout<<a<<" "<<b<<" "<<c<<" ";
		sum+=c;
		a>c?a=a-c:a=0;
		sum+=(b/2);
		//cout<<sum<<" ";
		if(b%2!=0)
		{
			sum++;
			a>2?a=a-2:a=0;
		}
		if(a!=0)
		sum+=(a+(4-a%4))/4;
		
	
		cout<<sum+1;
	return 0;
}
