#include <bits/stdc++.h>
using namespace std;

typedef long long unsigned llu;
typedef long long lld;
typedef long ld;
typedef stringstream ss;

//important constants
#define pi M_PI
#define mod7 10000007
#define mod9 1000000009
#define mod97 1000000007
#define MAX 100005
#define EPS 1e-9

//infinity
#define INF (int)1e9
#define LINF (long long)1e18

//Read Inputs
#define si(n) scanf("%d",&n);
#define sli(n) scanf("%lld",&n);
#define slim(n,m) scanf("%lld%lld",&n,&m);

//shortcuts
#define mem(a,b)        memset(a,b,sizeof(a))
#define X real()
#define Y imag()
#define maX(a,b)        ((a)>(b)?(a):(b))
#define miN(a,b)        ((a)<(b)?(a):(b))
#define abS(x)          ((x)<0?-(x):(x))

long long checkP2(long long int n)
{
    return !(n&(n-1));
}

inline void checkNagative(long long &num)
{
    while (num < 0) num += mod97;
}

long long powerMod(long long a, long long b, long long c)
{
    long long result = 1;
    long long temp = 1;
    long long mask = 1;
    for (int i = 0; i < 64; i++)
    {
        mask = (i == 0) ? 1 : (mask * 2);
        temp = (i == 0) ? (a % c) : (temp * temp) % c;
            
        if ((b & mask) == mask)
            result = (result * temp) % c;
    }
    return result;
}

inline long long multiply(long long num, long long amt)
{
     checkNagative(num);
     checkNagative(amt);
     if (num >= mod97) num %= mod97;
     if (amt >= mod97) amt %= mod97;
     num *= amt;
     if (num >= mod97) num %= mod97;
//   checkNagative(num);
     return num;
}

long long int gcd(long long int a, long long int b)
{
    long long int c;
    while(b!=0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    lld t,n,m,i,j,k,l,x,y,z,flag,count,sum,a[MAX]={0},b[MAX],c[MAX],d,mx,mn,prod;
    char s[MAX],r[MAX];
    sli(t);
    count=0;
    while(t--)
    {
        scanf("%lld",&x);
        if(a[x]==2)
            count--;
        a[x]=1;
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&x);
            if(a[x]==0)
            {
                count++;
                a[x]=2;
            }
        }
    }
    printf("%lld\n",count);
    return 0;
}
