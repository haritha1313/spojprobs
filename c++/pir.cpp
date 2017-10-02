#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	double u,v,w,U,W,V,u1,v1,w1,u2,v2,w2,vol;
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
		printf("%.4f\n",vol);
	}
	return 0;
}
