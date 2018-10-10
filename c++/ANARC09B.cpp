#include<bits/stdc++.h>
using namespace std;


long long int gcd (long long int a , long long int b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);	
}

int main()
{
	long long int w,h,n,hcf,i;
	scanf("%lld%lld",&w,&h);
	while(w!=0&&h!=0)
	{
		if(w==h)
			cout<<"1"<<endl;
		else if(w>h&&w%h==0)
			cout<<w/h<<endl;
		else if(h>w&&h%w==0)
			cout<<h/w<<endl;
		else
		{
			n = w*h;
			hcf = gcd(w,h);
			n = n/hcf;
	//	n = n/hcf;
			printf("%lld\n",n);
		}
		scanf("%lld%lld",&w,&h);
	}
	return 0;
}
