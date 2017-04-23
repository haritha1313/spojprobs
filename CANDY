#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t,y;
	cin>>t;
	while(t!=-1)
	{
		int v=0,sum=0,a[t];
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if((sum%t)!=0)
		 {
		 	y=-1;
		 	
		 }
		 else
		 {for(int i=0;i<t;i++)
		 v+=(abs((sum/t)-a[i]));
		 y=v/2;
		 }
		cout<<y<<"\n";
		cin>>t;
	}
	return 0;
}
