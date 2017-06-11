#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	string str,str2,news;
	while(cin>>t)
	{
		cin>>str;
		cin>>str2;
		int flag=0;
		for(int i=0;str2[i]!='\0';i++)
		{
			if(str2[i]==str[0])
			{
				news=str2.substr(i,t);
				if(news==str)
				{cout<<i<<"\n";
				if(flag==0)
				flag=1;
				}
			}
			
		}
		if(flag==0)
		cout<<"\n";
	}
	return 0;
}
