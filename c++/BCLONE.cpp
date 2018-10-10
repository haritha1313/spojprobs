    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	ios_base::sync_with_stdio(false);	cin.tie(NULL);
    	double r, h;
    	int t;		cin>>t;
    	while(t--)
    	{
    		cin>>r>>h;
    		double low = 0.0, high = 100.0, mid;
    		while( (high - low) > 1e-6)
    		{
    			mid = low + (high - low)/(2.0);
    			if((r*r*mid*mid*mid) + (3*r*mid*mid*sqrt(r*r + h*h)) - (6*r*h*h*sqrt(r*r + h*h)) < 0)
    				low = mid;
    			else
    				high = mid;
    		}
    		double res = (low + high)/(2.0);
    		if(res <= h)
    			cout<<setprecision(6)<<fixed<<res<<endl;
    		else
    			cout<<setprecision(6)<<fixed<<h<<endl;
    	}
    	return 0;
    }
