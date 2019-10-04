#include<bits/stdc++.h>
using namespace std;

long long int mod(long long int a,long long int b,long long int m)
{
     long long int x=1;

     while(b>0)
     {
         if(b%2==1)
         {
             x=(x*a)%m;
         }

         a=(a*a)%m;
         b=b/2;
     }

     return x%m;

}


int main()
{
   long long int n,k,a;
   cin>>n>>k>>a;
   
   vector<long long int> v;
   for(int i=0; i<n; i++)
   {
      if(mod(i,k,n)==a)
      {
         v.push_back(i);
      }

   }

   cout<<v.size()<<endl;
   for(int i=0; i<v.size(); i++)
   cout<<v[i]<<endl;

  // cout<<endl;
   
}
