    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	ios::sync_with_stdio(false);
    	cin.tie(0);
    	int t,k,len,temp,i,cnt;
    	long n;
    	cin>>t;
    	while(t--)
    	{
    		cin>>n>>k;
    		temp=n-1;
    		len=floor(log2(temp)) + 1;
    		int a[len];
    		i=0; cnt=0;
    		while(temp)
    		{
    			a[i]=temp%2;
    			if(a[i]) cnt++;
    			i++;
    			temp/=2;
    		}
    		if(cnt<=k) 
    		{ 
    		cout<<n-1<<endl; continue;
    		}
    		for(i=1;i<len;i++)
    		{
    			if(cnt<=k)
    			break;
    			if(a[i])
    			{
    			a[i]=0;
    			cnt--;
    		    }
    		}
    		if(cnt>k) 
    		{
    			cout<<-1<<endl; continue;
    		}
    		for(i=0;i<len;i++)
    		temp=temp + pow(2,i)*a[i];
    		cout<<temp<<endl;
    	}
    	return 0;
    } 
