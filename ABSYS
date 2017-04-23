#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main() {
	int t;
	int a1,a2,a3,i;
	string str1,str2,str3;
	char ch,ch2;
	cin>>t;
	while(t--)
	{
		int p=0;
		cin>>str1>>ch>>str2>>ch2>>str3;
		i=0;
		while(str1[i]!='\0')
		{
			if(str1[i++]=='m')
			{p=1;
			break;}
		}
			if(p!=1)
			a1=stoi(str1);
		i=0;
		while(str2[i]!='\0')
		{if(str2[i++]=='m')
		{p=2;
		break;}
 
		}
		if(p!=2)
			a2=stoi(str2);
		i=0;
		while(str3[i]!='\0')
		{
			if(str3[i++]=='m')
			{p=3;
			break;}
		}
		if(p!=3)
			a3=stoi(str3);
		switch(p)
		{
			case 1:cout<<a3-a2<<" + "<<a2<<" = "<<a3<<"\n";
					break;
			case 2:cout<<a1<<" + "<<a3-a1<<" = "<<a3<<"\n";
				break;
			case 3:cout<<a1<<" + "<<a2<<" = "<<a1+a2<<"\n";
				break;
 
		}
 
	}// your code goes here
	return 0;
}
