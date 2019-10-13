#include<bits/stdc++.h>
using namespace std;

long long int mul(long long int a,long long int b,long long int m)
{
    long long int x=0;
    a=a%m;
    while(b>0)
    {
        if(b%2)
        x=(x+a)%m;

        a=(2*a)%m;
        b=b/2;
    }

    return x%m;
}

long long int mod(long long int a,long long int b,long long int m)
{
    long long int x=1;
    while(b>0)
    {
        if(b%2)
        x= mul(a,x,m)%m;

        a=mul(a,a,m)%m;
        b=b/2;
    }

    return x%m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
          int f1=0;
        
        int c1=0;
        
        if(n>3)
        {
        while(c1<=20)
        {
          long long int a = 2+rand()%(n-3);
          if(mod(a,n-1,n)!=1)
          {
              f1=1;
              break;
          }
          c1++;
          

        }
        

        if(f1)
        cout<<"NO"<<"\n";
        else 
        cout<<"YES"<<"\n";
        }
        else
        {
        	cout<<"YES"<<"\n";
        }
    }
}
