#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <iomanip>
#include <limits>
#include <cstdlib>
using namespace std;
#define _ ios::sync_with_stdio(false); cin.tie(0);
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
inline bool ispalindrome(string s) { for(int i=0,j=s.size()-1;i<=j;i++,j--) if(s[i]!=s[j]) return false; return true; }
inline bool ispalindrome(vector<int> s) { for(int i=0,j=s.size()-1;i<=j;i++,j--) if(s[i]!=s[j]) return false; return true; }
inline ll gcd(ll a,ll b) {  return ((b==0)?a:gcd(b,a%b)); }
inline ll modexp(ll a,ll b,ll m) { ll d=1; while(b>0) { if(b&1) d=(d*a)%m; a=(a*a)%m; b=b>>1; } return d; }
//#define MAX 10000007
/*
vector<bool> isprime(MAX+1,1);
void sieve() {
isprime[0]=isprime[1]=0;
int i,j,sq=sqrt(MAX);
for(i=4;i<=MAX;i+=2) isprime[i]=0;
for(i=3;i<=sq;i+=2) if(isprime[i]) for(j=i*i;j<=MAX;j+=(i+i)) isprime[j]=0;  }  */
/*
vector<int> small(MAX+1);
void smallprime(){
int i,j,sq=sqrt(MAX);
small[0]=small[1]=0;
for(i=2;i<=MAX;i++) small[i]=(i&1)?i:2;
for(i=3;i<=sq;i+=2) if(small[i]==i) for(j=2*i;j<=MAX;j+=i) if(small[j]==j) small[j]=i;  }  */
/*
void factorization(ll n)
{
	ll temp=small[n],prod=1,count=0;
	while(n>1)
	{
		if(temp==small[n]) count++;
		else{
		// cout<<temp<<"^"<<count<<" ";
		// prod*=(count+1);
		temp=small[n];
		count=1;
		}
		n/=small[n];
	}
		// cout<<temp<<"^"<<count<<" "<<endl;
		// prod*=(count+1);
}    */

#define mod 10000007
int main()
{
	_
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int n;
		cin>>n;
		ll a[n],i,res=0,arr[32]={0};
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<32;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(a[j]&(1<<i))
					arr[i]++;
			}
			res+=arr[i]*(n-arr[i])%mod;
		}
		res = ((res%mod)*2)%mod;
		if(res<0)
			res = (res+mod)%mod;
		cout<<"Case "<<x<<": "<<res<<endl;
	}
	EXIT_SUCCESS;
}
