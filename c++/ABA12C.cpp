#include<bits/stdc++.h>
using namespace std;

int m[110];
vector<int> val;
vector<int> wt;

int main()
{
	int t,i,j,k,n,r,p;
	cin>>t;
	while(t--)
	{
		val.clear();
		wt.clear();
		cin>>n>>k;
		for(i=0;i<k;i++)
		{
			cin>>p;
			if(p!=-1)
			{
				val.push_back(p);
				wt.push_back(i+1);
			}
		}

		r=val.size();
		for(i=1;i<=k;i++)
		{
			m[i]=10000;
			for(j=0;j<r;j++)
			{
				if(i-wt[j]<0)
					break;
				else
					m[i]=min(m[i],val[j]+m[i-wt[j]]);
			}
		}
		if(m[k]!=10000)
			cout<<m[k]<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
