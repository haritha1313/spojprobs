#include <bits/stdc++.h>
using namespace std;
map<int,long long> dp;
long long roundoff(int s)
{
    if
        (s<12)
    {
        return s;
    }
    else if(dp.find(s)!=dp.end())
    {
        return dp[s];
    }
    else
    {
        dp[s]=roundoff(s/4)+roundoff(s/3)+roundoff(s/2);
        return dp[s];
    }
}
int main() 
{
	int s;
	while(scanf("%d",&s)==1)
	{
	    cout<<roundoff(s)<<"\n";
	}
	return 0;
}
