#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int a[n];
		
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int k=-1;
		vector<int> q;
		q.push_back(a[n-1]);
		for(long long int i=n-2;i>-1;i--)
		{
			
			if(a[i]<a[i+1])
			{
				q.push_back(a[i]);
				k=i;
				break;
			}
			else
			{
				q.push_back(a[i]);
			}
		}
		
		if(k==-1)
		{
			cout<<"-1\n";
		}
		else
		{
			for(long long int i=0;i<k;i++)
			{
				if(i!=k)
				{
					cout<<a[i];
				}
			}
		            sort(q.begin(),q.end());
		            long long int blah=-1;
		            for(long long int i=0;i<q.size();i++)
		            {
		            	if(q[i]>a[k])
		            	{
		            		blah=i;
		            		break;
		            	}
		            }
		            cout<<q[blah];
		             for(long long int i=0;i<q.size();i++)
		             {
		             	if(i!=blah)
		             	{
		             		cout<<q[i];
		             	}
		             }
		             cout<<"\n";
		}
	}
	return 0;
} 
