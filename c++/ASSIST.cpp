#include <bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false); cin.tie(0);
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fk(i,k,n) for(int i=k;i<=n;i++)
#define ll long long
#define l long
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define max3(a,b,c) ((max(a,b)>(c))?max(a,b):c)
#define min3(a,b,c) ((min(a,b)<(c))?min(a,b):c)
#define pb push_back
#define max 50000
vector<int>a;
vector<bool>check(max,false);
void pre()
{
 	int i,j;
 	for(i=2;i<=34000;i++)
 	{
  		if(check[i]==false)
  		{
   			int x=0;
   			for(j=i+1;j<=34000;j++)
   			{
    			if(check[j]==false)
    				x++;
    			if(x==i)
    			{
     				check[j]=true;
     				x=0;
    			}
   			}
  		}
	}
 	for(i=2;i<=34000;i++)
 	{
  		if(check[i]==false)
  		{
   			a.pb(i);
  		}
 	}
}
int main()
{
	io
	pre();
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		cout<<a[n-1]<<endl;
	}
	EXIT_SUCCESS;
}
