#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0,j=0,k,a[112]={0},r;
		cin>>r;
		string s;
		cin>>s;
		while(s[i]!='\0')
		{
			if(s[i]=='H')
				s[i]=0;
			else
				s[i]=1;
			i++;
		}j=i-2;
		i=0;
		//cout<<s[i]<<" ";
		while(i<j)
		{
			k=s[i]*100;
			k+=s[i+1]*10;
			k+=s[i+2];
			++i;
			a[k]++;
		}cout<<r<<" ";
		a[0]++;
		a[1]++;
		a[10]++;
		a[11]++;
		a[100]++;
		a[101]++;
		a[110]++;
		a[111]++;
		for(i=111;i>=0;i--)
		{
			if(a[i]>0)
			{
				a[i]--;
				cout<<a[i]<<" ";
			}
		}cout<<endl;
		r++;
	}
	return 0;
}

