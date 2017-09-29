#include<iostream>
using namespace std;
long numrev(long int x)
{
		int rem,rev=0;
		while(x>0)
		{
			rem=x%10;
			rev=rev*10+rem;
			x/=10;
		}
		return rev;
}
int main()
{
	int N;
	long int a,b,c,d,e;
	
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a>>b;
		c=numrev(a);
		d=numrev(b);
		e=c+d;
		cout<<numrev(e)<<"\n";
	}
	return 0;
}
