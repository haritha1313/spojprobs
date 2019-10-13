#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double s;
        cin>>s;

        cout<<setprecision(6)<<(1-1/(3*sqrt(s/2)))<<"\n";
    }
}
