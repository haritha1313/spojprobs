#include <bits/stdc++.h>
using namespace std;
int n;
int arr[2009];
int dp[2001][2001];
int profit(int lo, int hi, int year)
{
	if(lo>hi)
		return 0;
	if(dp[lo][hi]!=-1)
		return dp[lo][hi];
	return (dp[lo][hi] = max(profit(lo + 1 , hi, year+1) + year * arr[lo] , profit(lo,hi - 1, year+1) + arr[hi]*year));
}

int main() {
	cin>>n;
	memset(dp , -1 , sizeof dp);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<profit(0,n-1,1)<<"\n";
	return 0;
}
