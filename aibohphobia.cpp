#include <bits/stdc++.h>
using namespace std;

int lcs(string str1, string str2, int len)
{
	int A[len+1][len+1];
	
	for(int i=0;i<=len;i++)
	{
		for(int j=0;j<=len;j++)
		{
			if(i==0||j==0)
			A[i][j]=0;
			else
			if(str1[i-1]==str2[j-1])
			{
				A[i][j]=A[i-1][j-1]+1;
			}
			else
			{
				A[i][j]=max(A[i-1][j],A[i][j-1]);
			}
		}
	}
	return A[len][len];
}
int main() {
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		string str2(str);
		reverse(str2.begin(),str2.end());
		int len = str.size();
		cout<<len-lcs(str,str2,len)<<"\n";
	}
	return 0;
}
