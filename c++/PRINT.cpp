#include<bits/stdc++.h>
using namespace std;



int main()
{
    /* ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);*/

    long long int t;
   // cin>>t;
    scanf("%lld",&t);
  
    while(t--)
    {
        long long int l,r;
        //cin>>l>>r;
        scanf("%lld",&l);
        scanf("%lld",&r);
      // cout<<r-l+1<<"\n";
       
       
       int limit = sqrt(r);
       int max_factor = sqrt(limit);
       vector<char> is_composite(limit+1);
       
       /*for(int i=0; i<limit+1; i++)
        is_composite[i]=false;*/

      
       

       vector<int> v;
       
       for(int i=2; i<=max_factor; i++)
       {
         if(!is_composite[i])
         for(int j=2*i; j<=limit; j=j+i)
         is_composite[j]=true;
         
       }

       for(int i=2; i<=limit; i++)
       {
         if(!is_composite[i])
         v.push_back(i);

       }

      /* for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
       cout<<endl;*/

        int w_s=r-l+1;
       vector<char> v1(w_s);
       int len0=v.size();

       for(int i=0; i<len0; i++)
       { 
         int mul1= v[i]*v[i];

         if(mul1>r)
         break;

         int i0= v[i];

         

         if(l%v[i])
         {
             int s0 = v[i]-l%v[i];
             
             if(l<=v[i])
             { for(int j=s0+v[i]; j<=w_s; j=j+v[i])
              v1[j]=true;

             }
              else
              {
               for(int j=s0; j<=w_s; j=j+v[i])
              v1[j]=true;
              }
         }
         else if(l<=v[i])
         {
           
             for(int j=v[i]; j<=w_s; j=j+v[i])
              v1[j]=true;
         }
         else
         {
              for(int j=0; j<=w_s; j=j+v[i])
              v1[j]=true;
           
         }
         
         


       }
       
       int len001=v1.size();
       for(int i=0;i<len001; i++)
       {
          if(!v1[i])
          cout<<i+l<<"\n";
       }

       
      } 
       

    }
//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
