#include <bits/stdc++.h>
using namespace std;
//int arr[2001][2001];
int main() {
	int t,h,a;
	cin>>t;
	//memset(arr, -1 , sizeof arr);
	while(t--)
	{
		int cnt=-1;
		cin>>h>>a;
		//if(arr[h][a]!=-1)
		//cout<<arr[h][a]<<"\n";
		//else {
		int x=0;
		while(1)
		{
			cnt++;
			if(x==0)
			{
				h=h+3;
				a=a+2;
				x=1;
			}
			else
			{
				if(h>20&&a<=10)
				{
					h=h-20;
					a=a+5;
				}else
				if(h>5&&a>10)
				{
					h=h-5;
					a=a-10;
				}
				else
				{
					cout<<cnt<<"\n";
					break;
				}
				x=0;
			}
		}
		// arr[h][a]=cnt;
		// cout<<arr[h][a]<<"\n";
	//	}
	}
	return 0;
}
