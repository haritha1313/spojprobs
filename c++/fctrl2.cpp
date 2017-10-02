#include<iostream>
#define max 500
using namespace std;
int multiply(int x,int fact[],int size)
{
	int carry=0;
	int y;
	for(int i=0;i<size;i++)
	{
		y=x*fact[i]+carry;
		fact[i]=y%10;
		carry=y/10;
	}
	while(carry)
	{
		fact[size]=carry%10;
		carry/=10;
		size++;
	}
	return size;
}
int factorial(int n)
{
	int fact[max];
	fact[0]=1;
	int size=1;
	for(int x=1;x<=n;x++)
	{
		size=multiply(x,fact,size);
		
	}
	int i=size-1;
	for(;i>=0;i--)
	cout<<fact[i];
	
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		factorial(n);
		cout<<"\n";
	
	}
	return 0;
}
