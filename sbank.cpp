#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string nl;
	getline(cin,nl);
	while(t--)
	{
		int n;
		string str;
		map <string,int> mymap;
		map <string,int> ::iterator it;
		cin>>n;
		string nl;
		getline(cin,nl);
		//cout<<n<<"\n";
		for(int i=0;i<n;i++)
		{
		//	cout<<"hi";
			getline(cin,str);
			mymap[(string)str]++;
			
		}
		for(it=mymap.begin();it!=mymap.end();it++)
		{
			cout<<(*it).first.c_str()<<" "<<it->second<<"\n";
		}
		cout<<"\n";
		
	}
	return 0;
}
