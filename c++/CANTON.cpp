/******************************

achie27
AC, noice

******************************/
#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector< pair<int, int> > v(10000001);
	int shft=-1, num=1, den=1, prenum=1, preden=1, i=0;
	for (i = 0; i < 10000001; ++i){
		v[i].first = num;
		v[i].second = den;
		if(prenum==den || preden==num){
			if(shft==-1){
				den++;
				shft=1;
				prenum=-1;
				preden=den;
			}
			else{
				num++;
				shft=-1;
				prenum=num;
				preden=-1;
			}
		}
		else{
			if(shft==1){
				num++;
				den--;
			}
			else{
				num--;
				den++;
			}
		}
	
	}

	int t;
	cin>>t;

	while(t--){
		long long int n;
		cin>>n;
		cout<<"TERM "<<n<<" IS "<<v[n-1].first<<"/"<<v[n-1].second<<endl;
	}

	return 0;
}