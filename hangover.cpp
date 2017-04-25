#include<iostream>
using namespace std;
int main()
{
	float array[275],c;
	int i;
	for(i=0;i<275;i++)
	array[i]=(1.0/(2.0+i));
	cin>>c;
	while(c)
	{
		float sum=0.00;
		for(i=0;i<275;i++)
		{sum+=array[i];
		if(sum>=c)
		{
		cout<<i+1<<" card(s)\n";
		break;
		}
		}
		cin>>c;
	}
}
