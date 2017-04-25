#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	int t,k,ans;
	string a;
	long long int b,i,r;
	cin>>t;
	while(t--){
		cin>>a;
		cin>>b;
		i=a.length();
		k=a[i-1]-'0';
		if(k==0)
		ans=0;
		else{
		if(b%4==0)
		{
			if(k%2==0)
			ans=6;
			else
			ans=1;
		}
		else
		{
			r=b%4;
			ans=((pow(k,r)));
			ans=ans%10;
		}}
		cout<<ans<<"\n";
	}
	return 0;
}
