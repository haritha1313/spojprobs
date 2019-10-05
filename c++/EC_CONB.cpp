#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a;
        cin>>a;

        if(a%2)
        cout<<a<<"\n";
        else
        {
            bitset<32> arr(a);
            
           // b1(a);
           //int arr[32];
           int f1=0;
           int ans=0;
           int id;
           for(int i=31; i>=0; i--)
              {
                  if(arr[i]==1&& f1==0)
                  {
                      f1=1;
                      id=i;
                  }
                  if(f1&&arr[i])
                  {
                    ans=ans+pow(2,id-i);
                  }
              }

            cout<<ans<<"\n";

        }
        
    }
}
