#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int m,n,ans=0;
	while(true)
	{
		cin>>m>>n;
		if(m==-1&&n==-1)
		break;
	
		
			if(m>=n)
			{n++;
			ans=(m/(n));
			if(m%n)
			ans++;
			}
			else
			{
				m++;
				ans=n/m;
				if(n%m)
				ans++;
				}
		cout<<ans<<"\n";
	}
	return 0;
}
