#include <iostream>
using namespace std;

int main() {
	int n,t;
	cin>>n;
	while(n)
	{
		int a[n],s=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			t=a[i]-1;
			if(a[t]==i+1)
			continue;
			else
			{
				cout<<"not ambiguous\n";
				s=1;
				break;
			}
			
		}if(!s) cout<<"ambiguous\n";
		cin>>n;
	}return 0;
}
