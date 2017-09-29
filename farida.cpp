#include <bits/stdc++.h>
using namespace std;

long long int findsum(long long int A[], int n)
{
	long long int incl=0,excl=0,newexc;
	for(int i=0;i<n;i++)
	{
		newexc=max(incl,excl);
		incl=excl+A[i];
		excl=newexc;
	}
	return max(incl,excl);
}

int main() {
	int t,n;
	
	cin>>t;
	int te=t;
	while(t--)
	{
		cin>>n;
		long long int A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		cout<<"Case "<<te-t<<": "<<findsum(A,n)<<"\n";
	}
	return 0;
}
