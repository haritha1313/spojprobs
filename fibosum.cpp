#include <iostream>
#include<cstring>
#define MOD 1000000007
using namespace std;
 
long long int fibonacci(int n)
{
	long long int fib[2][2]={{1,1},{1,0}}, result[2][2]={{1,0},{0,1}}, temp[2][2]={{0,0},{0,0}};
	int i,j,k;
	while(n)
	{
		if(n&1)
		{
			memset(temp,0,sizeof(temp));
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					for(k=0;k<2;k++)
						temp[i][j]=(temp[i][j]+result[i][k]*fib[k][j])%MOD;
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					result[i][j]=temp[i][j];
		}
		memset(temp,0,sizeof(temp));
		for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					for(k=0;k<2;k++)
						temp[i][j]=(temp[i][j]+fib[i][k]*fib[k][j])%MOD;
		for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					fib[i][j]=temp[i][j];
 
		n=n/2;
	}
	return result[0][1];
}
int sum(int a)
{
	return ((fibonacci(a+2)-1));
}
int main() {
	int t;
long long int m,n,ans;
	cin>>t;
 	while(t--){
	cin>>m>>n;
	ans=(sum(n)-sum(m-1));
if(ans<0)

ans=ans+MOD;
ans=ans%MOD;	
	cout<<ans<<"\n";
	}
	return 0;
}
