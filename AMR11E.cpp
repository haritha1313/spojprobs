#include <bits/stdc++.h>
using namespace std;
int main()
{
	int primes[3000];
	vector <int> arr;
	for(int i=0;i<3000;i++)
	primes[i]=1;
	primes[0]=primes[1]=0;
	for(int i=2;i<3000;i++)
	{
		if(primes[i]==1){
		for(int q=i*2;q<3000;q=q+i)
		{	primes[q]-=1;
		if(primes[q]+2==0)
		arr.push_back(q);
		}}
		
	}
	for(int i=0;i<3000;i++)
//	cout<<i<<" "<<primes[i]<<" ";
	sort(arr.begin(),arr.end());
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<arr[n-1]<<"\n";
	}
	
	return 0;
}
