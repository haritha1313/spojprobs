#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int a,d;
	cin>>a>>d;
	while(1){
		if(a==0&&d==0)
		break;
		else{
			int att[a];
			int def[d];
			for(int i=0;i<a;i++)
			cin>>att[i];
			for(int i=0;i<d;i++)
			cin>>def[i];
			sort(att,att+a);
			sort(def,def+d);
			if(att[0]<def[1])
			cout<<"Y\n";
			else
			cout<<"N\n";
			cin>>a>>d;
		}
	}
	return 0;
}
