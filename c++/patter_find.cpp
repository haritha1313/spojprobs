#include <bits/stdc++.h>
using namespace std;
long int arr[1000005];
long int fin[1000005];
int main() {
	int t;
	string pattern, text;
	cin>>t;
	while(t--)
	{
		
		cin>>text;
		cin>>pattern;
		long int len, tlen;
		len=pattern.length();
		tlen=text.length();
		arr[0]=0;
		int i=1,j=0;
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
				{
					arr[i]=0;
					i++;
				}
				else
				{
					j=arr[j-1];
				}
			}
		}
	
		i=0;j=0;
		int q=0;
		while(i<tlen)
		{
			if(text[i]==pattern[j])
			{
				i++;
				j++;
			}
			if(j==len)
			{
				//cout<<i-j<<"\n";
				fin[q++]=(i-j+1);
				j=arr[j-1];
			}
			else
			{
				if(i<tlen && text[i]!=pattern[j])
				{
					if(j==0)
					i++;
					else
					j=arr[j-1];
				}
			}
		}
		if(q!=0){
		cout<<q<<"\n";
		for(int i=0;i<q;i++)
		{
			cout<<fin[i]<<" ";
		}
		cout<<"\n";}
		else
		{
			cout<<"Not Found\n";
		}
		cout<<"\n";
	}
	return 0;
}
