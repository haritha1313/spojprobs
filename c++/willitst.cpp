#include <iostream>

using namespace std;

int main() {
	long long int n;
	cin>>n;
	if(n==1)
	cout<<"TAK";
	else
	while(n%2==0&&n>0)
	{
		n/=2;
		if(n==1)
		{cout<<"TAK";
		break;}
	}if(n>1)cout<<"NIE";
	
	return 0;
}
