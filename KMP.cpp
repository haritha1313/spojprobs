#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int len;
	string pattern,text;
	while(cin>>len)
	{
	cin>>pattern>>text;
	int flag=0;
	long long int arr[len];
	long long int tlen=text.length();
	arr[0]=0;
	int j=0;
	int i=1;
	while(i<len)
	{
		if(pattern[i]==pattern[j])
		{
			arr[i]=j+1;
			i++;
			j++;
		}
		else
		{
			if(j==0)
			{arr[i]=0;
			i++;
			}
			else
			{
				j=arr[j-1];
			}
		}
	}
	i=0;
	j=0;
	while(i<tlen)
	{
		if(text[i]==pattern[j])
		{
			i++;j++;
		}
		if(j==len)
		{
			cout<<i-j<<"\n";
			j=arr[j-1];
			flag=1;
		}
		else
		{
			if(i<tlen && pattern[j]!=text[i])
			{
				if(j==0)
				i++;
				else
				j=arr[j-1];
			}
		}
		
	}
	if(flag==0)
		{
			cout<<"\n";
		}
	}
	return 0;
}
