#include <bits/stdc++.h>
using namespace std;
int dp[2001][2001];
int findlife(int x, int h, int a)
{
	if(h<=0||a<=0)
	return 0;
	
	if(dp[h][a]!=-1)
	return dp[h][a];
	
	if(x)
	return (findlife(0,h+3,a+2)+1);
	//cout<<x<<" health "<<newh<<" armor "<<newa<<"\n";
	dp[h][a]=max(findlife(1,h-20,a+5)+1, findlife(1,h-5,a-10)+1);
	return dp[h][a];
}

int main() {
	int t,h,a;
	cin>>t;
	memset(dp , -1 , sizeof dp);
	while(t--)
	{
		cin>>h>>a;
		cout<<findlife(0,h+3,a+2)<<"\n";
	}
	return 0;
}
