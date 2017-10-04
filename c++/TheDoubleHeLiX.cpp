#include<bits/stdc++.h>
using namespace std;
#define max(a,b) a>b?a:b
#define mod 10005
int a[mod],b[mod],m,n;
int suma[mod],sumb[mod];
int binary(int val)
{
 int low=0,high=m-1,mid;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(b[mid]==val)
  {
   return mid;
  }
  else
  {
   if(b[mid]>val)
   high=mid-1;
   else
   low=mid+1;
  }
 }
 return -1;
}
int main()
{
 scanf("%d",&n);
 do
 {
  int i,sum=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   sum+=a[i];
   suma[i]=sum;
  }
  scanf("%d",&m);
  sum=0;
  for(i=0;i<m;i++)
  {
   scanf("%d",&b[i]);
   sum+=b[i];
   sumb[i]=sum;
  }
  int o1=0,o2=0,n1=0,n2=0,x,y=0;
  int s1,s2,ans=0;
  for(i=0;i<n;i++)
  {
   x=binary(a[i]);
   if(x>=0)
   {
    y++;
    n2=x;
    n1=i;
    if(y==1)
    {
     s1=suma[n1];
     s2=sumb[n2];
    }
    else
    {
     s1=suma[n1]-suma[o1];
     s2=sumb[n2]-sumb[o2];
    }
    ans+=max(s1,s2);
    o1=n1;
    o2=n2;
   }
  }
  if(y>0)
  {
  s1=suma[n-1]-suma[o1];
  s2=sumb[m-1]-sumb[o2];
    }
    else
    {
   s1=suma[n-1];
   s2=sumb[m-1];
    }
  ans+=max(s1,s2);
  printf("%d\n",ans);
  scanf("%d",&n);
 }while(n!=0);
 return 0;
}