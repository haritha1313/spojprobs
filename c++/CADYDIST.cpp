#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
int n;
cin>>n;
while(n!=0)
{
long sum=0;
vector<long> a(n),b(n);
for(long i=0;i<n;i++)
{
	cin>>a[i];
}
for(long i=0;i<n;i++)
{
	cin>>b[i];
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
reverse(b.begin(),b.end());
for(long i=0;i<n;i++)
{
	sum+=a[i]*b[i];
}
cout<<sum<<endl;
cin>>n;
	
}
	return 0;
} 
