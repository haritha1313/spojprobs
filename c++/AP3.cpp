#include <iostream>
#include <cmath>

typedef long long int LL;

using namespace std;

int main() {

        LL t,x,y,sum,i,a,tointeger,newdiff;
        long double n,cd,d;

        cin>>t;

        while(t--) {
            cin >> x >> y >> sum;
            d = 5.0 * y + 7.0 * x + 2.0 * sum;

            n = (d + sqrt(d * d - 48.0 * sum * (x + y))) / (2.0 * (x + y));
            tointeger = llrint(n);

            cd = (y - x) / (tointeger - 6.0);
            newdiff = llrint(cd);
            a = x - 2 * newdiff;
            cout<<tointeger<<endl;

            for(i=0;i<tointeger;i++) {
                cout<< a + newdiff * i<<" ";
            }
            cout<<endl;
    }
    return 0;
}
