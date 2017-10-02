/*#########################################
#
#	achie27
#	AC
#
#########################################*/

#include <iostream>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	if(t%10==0){
		cout<<2<<endl;
	}
	else{
		cout<<1<<endl;
		cout<<t%10<<endl;
	}

	return 0;
}
