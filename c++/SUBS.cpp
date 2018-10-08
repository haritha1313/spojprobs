#include <bits/stdc++.h>
using namespace std;

char ans[500011], x[500011], y[500011];

int main()
{
	int t;	cin>>t;
	while(t--){
		cin>>x>>y;
		int a = strlen(x);
		int b = strlen(y);
		
		int lo = 0, hi = b/a;
		int res;
		while(lo < hi){
			int mid = lo + (hi-lo+1)/2;
			int idx = 0;
			
			for(int i=0; i<a; i++)
				for(int j=1; j<=mid; j++)
					ans[idx++] = x[i];
					
			int sub = 0;
			for(int i=0; sub<idx && i<b; i++)
				if(ans[sub] == y[i])
					sub++;
					
			if(sub == idx)
				lo = mid;
			else
				hi = mid - 1;
		}
		cout<<lo<<endl;
	}
	return 0;
}
