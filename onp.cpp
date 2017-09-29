#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack <char> s;
string infix, postfix;
int opcheck(char a)
{
	if(a>=97&&a<=122)
	 return 1;
	 else return 0;
}
string majorfun(string infix)
{	int i=0;
	string postfix="";
	while(infix[i]!='\0')
	{
		if(opcheck(infix[i]))
		postfix+=infix[i];
		else
		{
		 if(infix[i]=='(')
		 s.push(infix[i]);
		 else
		 {
			if(infix[i]==')')
		 	{
			  while(!s.empty()&&(s.top()!='('))
			    {
				  postfix+=s.top();
				  s.pop();
				}
				s.pop();
			 }
			  else
			  {
	        	 
				   s.push(infix[i]);
			  }
	     }
        }
        i++;
	}
	
	return postfix;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>infix;
	string postfix=majorfun(infix);
    cout<<postfix<<"\n";
	}
	return 0;
	
}

