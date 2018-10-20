#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
#else
#define MAX 100000
#endif

long long int a[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int i,t,n,m,k,l,r,mid,x,y,flag,count,d,mx,mn;
	long long int sum,z,prod;
    
    a[0]=0;
    for(i=1;a[i-1]<=10000000000;i++)
        a[i]=a[i-1]+i;
    
	scanf("%d",&test);
	while(test--){
		scanf("%lld",&sum);
		
		l=1,r=i,flag=0;;
		while(r>l+1){
		    mid=(l+r)/2;
		    if(a[mid]==sum){
		        flag=1;
		        break;
		    }
		    
		    if(a[mid]>sum)  r=mid;
		    else            l=mid;
		}
		if(flag)    printf("%d\n",mid);
		else{
		    if(1ll*l*(l+1)==2*sum)      printf("%d\n",l);
		    else if(1ll*r*(r+1)==2*sum) printf("%d\n",r);
		    else    printf("NAI\n");
		}
// 	    z=(-1+sqrt(1+8*sum))/2;
// 		if(z*z+z==2*sum)
// 		    printf("%lld\n",z);
// 		else    printf("NAI\n");
        
	}
	return 0;
}
