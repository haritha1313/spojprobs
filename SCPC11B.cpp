#include<bits/stdc++.h>
using namespace std;


int main()
{
    while(1)
    {
        int t;
        cin>>t;
        if(t==0)
        break;
       
       int arr[t];
       for(int i=0; i<t; i++)
       cin>>arr[i];
       sort(arr,arr+t);

       
       if(arr[0]==0)
       {
           arr[t]=1422;
           int f1=0;
         for(int i=1; i<=t; i++)
         {
            int d1=arr[i]-arr[i-1];
            if(d1>200 || (i==t && d1>100) )
            {
                 f1=1;
              break;
            }

         }
         if(f1)
         {
             cout<<"IMPOSSIBLE"<<"\n";
         }
         else
         {
             cout<<"POSSIBLE"<<"\n";
         }
         
       }
       else
       {
           cout<<"IMPOSSIBLE"<<"\n";
       }
       

      
       

    }
    
    
    
}
