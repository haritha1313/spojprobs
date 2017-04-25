#include <iostream>
#include<string.h>
using namespace std;
int o,p,q,r,s,u,v,w,x;
void check(string str1)
{
	if(str1=="TTT")
		o++;
		else
		if(str1=="TTH")
		p++;
		else if(str1=="THT")
		q++;
		else if(str1=="THH")
		r++;
		else if(str1=="HTT")
		s++;
		else if(str1=="HTH")
		x++;
		else if(str1=="HHT")
		u++;
		else if(str1=="HHH")
		w++;
}
int main() {
	// your code goes here
	int t,len,i;
	string str,str1;
	cin>>t;
while(t--)
	{
	  	cin>>i;
	  	cin>>str;
	  	o=0,p=0,q=0,r=0,s=0,u=0,w=0,x=0;
	  	len=str.length();
	  	for(int j=0;j<len-2;j++)
	  	{
	  		str1=str.substr(j,3);
	  	
	  		check(str1);
	  	}
	  	cout<<i<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<x<<" "<<u<<" "<<w<<"\n";
	}
	return 0;
}
