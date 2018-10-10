#include <iostream>
using namespace std;
long long int gcd(long long int x,long long int y)
{
	long long int temp;
	while(y!=0)
	{
		temp=y;
		y=x%y;
		x=temp;
	}
	return x;
}
int main()
{
	//cin.sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long int num,den,hcf;
		num=((3*n*n)+1)/2;
		den=6*n*n*n;
		hcf=gcd(num,den);
		cout<<num/hcf<<"/"<<den/hcf<<endl;
	}
	return 0;
}
