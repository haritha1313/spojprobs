#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
   // scanf("%lld",&t);
   
   ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    while(t--)
    {
    long long int n1,n2;
    cin>>n1>>n2;
   // scanf( "%lld",&n1);
   // scanf( "%lld",&n2);
      
     cin.tie(NULL);
     cout.tie(NULL);
      
      int n=__gcd(n1,n2);

    int c1=0;
      for(int i=1; i<=sqrt(n); i++)
      {
          if(n%i==0)
          {
              int n1=n/i;
              int n2=n/n1;
              if(n1!=n2)
               c1=c1+2;
               else
               {
                   c1++;
               }
               
              
          }
      }

     cout<<c1<<"\n";
     // printf("%lld\n",c1);

      
    }

}
