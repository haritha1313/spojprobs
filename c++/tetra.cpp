#include <bits/stdc++.h>
#define PI (3.141592653589793)
using namespace std;
double calcarea(double a, double b, double c)
{
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main() {
	int t;
	cin>>t;
	double u,v,w,U,W,V,u1,v1,w1,u2,v2,w2,vol,a1,a2,a3,a4,ans;
	while(t--)
	{
		cin>>u>>v>>w>>W>>V>>U;
		u2=pow(u,2);
		v2=pow(v,2);
		w2=pow(w,2);
		u1=v2+w2-pow(U,2);
		v1=u2+w2-pow(V,2);
		w1=u2+v2-pow(W,2);
		vol=(sqrt((4*u2*v2*w2)-(u2*pow(u1,2))-(v2*pow(v1,2))-(w2*pow(w1,2))+(u1*v1*w1)))/12;
		//cout<<vol<<" ";
		a1=calcarea(u,V,w);
		a2=calcarea(v,U,w);
		a3=calcarea(u,W,v);
		a4=calcarea(U,V,W);
		//cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" ";
		
		ans=((3*vol)/(a1+a2+a3+a4));
		// cout<<ans<<" ";
		//ans=ans*ans*ans;
		//ans=(4*PI*ans)/3;
		printf("%.4f\n",ans);
	}
	// //	printf("%.4f\n",vol);
	// 	double lo=0.0,news,hi,mid,cur;
	// //	hi=(double)(INT_MAX);
	// hi=500.0;
	// 	while(lo<hi)
	// 	{
	// 		mid=lo+(hi-lo)/2;
	// 		news=mid*mid*mid;
	// 		cur=(4.0*PI*news)/3.0;
	// 		cout<<cur<<" "<<mid<<" ";
	// 		if( cur < vol)
	// 		{
	// 			lo=mid+0.0000001;
	// 		}
	// 		else
	// 		{
	// 			hi=mid-0.0000001;
	// 		}
	// 	}
	// 	printf("%.4f\n",lo);
	// }
	return 0;
}
