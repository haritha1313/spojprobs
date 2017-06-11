#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	int T[n],S[n];
	long long int lead=0;
	int player;
	for(int i=0;i<n;i++)
	{
		cin>>T[i]>>S[i];
		if(i!=0){
		T[i]=T[i]+T[i-1];
		S[i]=S[i]+S[i-1];
		}
		if(T[i]>S[i])
		{
			if(T[i]-S[i]>lead)
			{
				lead=T[i]-S[i];
				player=1;
			}
		}
		else
		{
			if(S[i]-T[i]>lead)
			{
				lead = S[i]-T[i];
				player=2;
			}
		}
	}
	cout<<player<<" "<<lead<<"\n";
	return 0;
}
