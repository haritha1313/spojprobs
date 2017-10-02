#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n,u,i;
	cin>>t;
	
	for(int q=1;q<=t;q++)
	{
		cin>>n>>u;
		int array[u],sum=0;
		for(i=0;i<u;i++)
		cin>>array[i];
		sort(array,array+u);
		for(i=u-1;i>=0;i--)
		{
			sum+=array[i];
			if(sum>=n)
			break;
			
		}
		cout<<"Scenario #"<<q<<":\n";
		if(sum>=n)
		cout<<u-i<<"\n";
		else
		cout<<"impossible";
		cout<<"\n";
	}
	return 0;
}
