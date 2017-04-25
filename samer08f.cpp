#include <iostream>
using namespace std;

int main() {
	int n=1;
	cin>>n;
	while(n)
	{
		
		cout<<(n*(n+1)*((2*n)+1))/6<<"\n";
		cin>>n;
	}
	return 0;
	
}
