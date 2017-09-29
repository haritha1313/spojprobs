#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
	int t;
	cin>>t;
	
	
	while(t){
		int a[t],b[t],C[t];
		int m=0;
		stack<int> arr;
		for(int i=t-1;i>=0;i--)
	{	cin>>a[i];
		b[i]=a[i];
	}
		sort(b,b+t);
		for(int j=0,i=t-1;j<t;j++)
		{	if(!arr.empty())
			if(arr.top()==b[j])
			{C[m++]=arr.top();
			arr.pop();
			continue;
			}
			while((a[i]!=b[j])&&i>=0)
			arr.push(a[i--]);
			if(i>=0)
			C[m++]=a[i--];
			else{
				while(!arr.empty())
				{
					C[m++]=arr.top();
					arr.pop();
					
				}
			}
		}int p=0;
		for(int i=0;i<t;i++)
		{
			if(C[i]==b[i])
			continue;
			else
			{cout<<"no\n";
			p=1;
			break;
			}
			
			
		}if(!p)
		{cout<<"yes\n";}
		cin>>t;
	}// your code goes here
	return 0;
}
