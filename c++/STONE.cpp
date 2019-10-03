#include<iostream>
#include<iomanip>
using namespace std;
typedef long long int lli;

double area2(int n, double x[],double y[]){
    double ans;
    lli i,a=0,b=0;
    for(i=0;i<n-1;i++){
            a+=x[i]*y[i+1];
            b+=y[i]*x[i+1];
    }
    a+=(x[n-1]*y[0]);
    b+=(y[n-1]*x[0]);
    ans= a-b;
    return ans;
}

void com(int n,double x[], double y[]){
    lli i;
    double xc,yc,a,b,xco=0,yco=0;
    double ar=double(area2(n,x,y)/2.0);
    for(i=0;i<n-1;i++){
        xc=(x[i]+x[i+1]);
        yc=(y[i]+y[i+1]);
        a=x[i]*y[i+1];
        b=y[i]*x[i+1];

        xco+= (xc)*(a-b);
        yco+= (yc)*(a-b);
    }
    xc=x[n-1]+x[0];
    yc=y[n-1]+y[0];
    a=(x[n-1]*y[0]);
    b=(y[n-1]*x[0]);

    xco+= (xc)*(a-b);
    yco+= (yc)*(a-b);

    xco=(xco/(double)(6*ar));
    yco=(yco/(double)(6*ar));
    cout << fixed << setprecision(2) <<xco<<" "<<yco<<endl; 

}

int main(){
    long long int t,n,i;
    cin>>t;
    while(t--){
    cin>>n;
    double x[n],y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    com(n,x,y);
    }
    return 0;
}
