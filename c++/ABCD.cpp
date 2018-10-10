#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long n;
	int i;
	scanf("%d", &n);
	getchar();
	char a[2][200000];
	for(i=0;i<2*n;i++)
	{
		scanf("%c",&a[0][i]);
	}
	for(i=0;i<2*n;i=i+2)
	{
		int p1=-1, p2=-1;
		int b[4]={1,1,1,1};
			b[a[0][i]-65]=0;
			b[a[0][i+1]-65]=0;		
		for(int j=0;j<4;j++)
		{
			if(b[j]==1)
			{
				if(p1==-1) p1=j;
				else p2=j;
			}
		}
		if(a[1][i-1]==65+p1)
		{
			a[1][i]=65+p2;
			a[1][i+1]=65+p1;
		}
		else
		{
			a[1][i]=65+p1;
			a[1][i+1]=65+p2;
		}
	}
	cout<<a[1];
}
