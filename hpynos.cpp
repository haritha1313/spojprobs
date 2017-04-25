#include <iostream>

using namespace std;
int main() {
	long long int n,sum=0,cnt=0;
	cin>>n;
	while(1)
	{
		sum+=(n%10)*(n%10);
		n=n/10;
		if(n==0)
		{
			cnt++;
			if(sum==1)
			{cout<<cnt;
			break;}
		else if(sum/10==0&&sum!=7)
		{
			cout<<-1;
			break;
		}
		else{
		n=sum;
		sum=0;
		}
		}
	}
	return 0;
}
