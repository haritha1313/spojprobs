#include <iostream>
#include<set>
#include<iterator>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	set <int> s1;
	set <int> s2;
	set <int> :: iterator it;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		s1.erase(a);
		s2.insert(a);
		for(int j=0;j<b;j++)
		{
			cin>>c;
			if(s2.find(c)==s2.end())
			s1.insert(c);
		}
	}

	cout<<s1.size();
	return 0;
}
