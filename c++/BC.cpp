#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(i=1;i<=t;i++)

int main()
{
    ll t,i;
    cin>>t;
    loop
    {
        double a,b,c;ll ans2=0;
        cin>>a>>b>>c;
        ll v=a*b*c;
       
       while (a > 1) {
			ans2++;
			a /= 2;
		}

		while (b > 1) {
			ans2++;
			b /= 2;
		}
		while (c > 1) {
			ans2++;
			c /= 2;
		}
        cout<<"Case #"<<i<<": "<<v-1<<" "<<ans2<<endl;
    }
    
    
    
    
    return 0;
}
