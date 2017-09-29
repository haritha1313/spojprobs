#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	while(cin>>str)
	{
		int cnt1=0,cnt2=0;int flag=0;
		if((str[0]>=65&&str[0]<=90)||str[0]=='_'||str[str.size()-1]=='_')
		{cout<<"Error!";flag=1;}
		else
		{
			for(int i=0;i<str.size();i++)
			{
				if(str[i]=='_')
				{cnt1++;
				if(str[i+1]=='_'){
				cout<<"Error!";flag=1;
				cnt2=0;
				break;}
				
				}
				if(str[i]>=65&&str[i]<=90)
				cnt2++;
			}
			if(cnt1!=0&&cnt2!=0)
			{	cout<<"Error!";flag=1;}
		}
		if(flag==0)
		{
			for(int i=0;i<str.size();i++)
			{
				if(str[i]>=97&&str[i]<=122)
				cout<<str[i];
				if(str[i]=='_')
				cout<<(char)toupper(str[++i]);
				if(str[i]>=65&&str[i]<=90)
				{cout<<'_';cout<<(char)tolower(str[i]);}
			}
		}
		cout<<"\n";
	}
	return 0;
}
