#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector<int> m,m1;

int main()
{
	int n,i,j,k,ans=0,x,y;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				x = a[i]*a[j] + a[k];
				m.push_back(x);
				if(a[k]!=0)
				{
					y = a[k]*(a[i]+a[j]);
					m1.push_back(y);
				}
			}
		}
	}
	sort(m.begin(),m.end());
	sort(m1.begin(),m1.end());
	int low,up;
	x = m.size();
	for(i=0;i<x;i++)
	{
		low = lower_bound(m1.begin(),m1.end(),m[i])-m1.begin();
		up = upper_bound(m1.begin(),m1.end(),m[i])-m1.begin();
		ans += up - low; 
	}
	cout<<ans<<endl;
	return 0;
}
