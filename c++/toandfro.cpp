#include <iostream>
#include<string.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	char s[200];
	cin>>t;
	while(t)
	{
		int q=0;
		cin>>s;
		int m=strlen(s);
		int r=m/t;
		char a[r][t];
     	for(int i=0;i<r;i++)
		{
			if(i%2==0)
			for(int j=0;j<t;j++)
			a[i][j]=s[q++];
			else
			for(int j=t-1;j>=0;j--)
			a[i][j]=s[q++];
		}
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<r;j++)
			cout<<a[j][i];
		}
		cout<<"\n";
		cin>>t;
	}
	
	return 0;
}

