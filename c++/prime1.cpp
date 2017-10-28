#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,m,n,i,t,r;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(m<2)
		m=2;
		for(i=m;i<=n;i++)
			{int c=0,j;
				r=sqrt(i);
			for(j=2;j<=r;j++)
				if(i%j==0)
				 {c++;
				 break;
				 }

			if(c==0||i==2||i==3)
			cout<<i<<endl;
			}
			cout<<endl;
	}
	return 0;
}
