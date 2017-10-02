#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string str1,str2;
		int arr[n+1][m+1];
		cin>>str1>>str2;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				if(i==0||j==0)
				arr[i][j]=0;
				else{
				if(str1[i-1]!=str2[j-1])
				{
					arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
				}
				else
				{
					arr[i][j]=arr[i-1][j-1]+1;
				}}
			}
		}
		cout<<arr[n][m]<<"\n";
	}
	return 0;
}
