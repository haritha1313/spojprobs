#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,m,t,y;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==0)
		m=10;
		else
    if(b%4==0)
    {
    	if(b==0)
    	m=11;
    	else
	 m= pow(a,4);
	}
	 else
	 if((b-1)%4==0)
	 m=pow(a,1);
	 else
	if((b-2)%4==0)
	m=pow(a,2);
	else
	if((b-3)%4==0)
	m=pow(a,3);
	y=m%10;
	cout<<y<<"\n";
}
return 0;
}
