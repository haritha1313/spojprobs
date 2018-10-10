    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<utility>
    #include<cmath>
    using namespace std;
    #define _ ios::sync_with_stdio(false); cin.tie(0);
    #define f1(i,n) for(int i=1;i<=n;i++)
    #define f2(i,n) for(int i=2;i<=n;i++)
    #define max 10000007
    vector<long> small(max);
    void sieve()
    {
    	int i,j,sq=sqrt(max);
    	f1(i,max) small[i]=i;
    	f2(i,sq) if(small[i]==i) for(j=i*i;j<=max;j+=i) if(small[j]==j) small[j]=i;
    }
     
    int main()
    {
    	_
    	sieve();
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	long n,num,prod,ans=0,count;
    	cin>>num;
    	int c[10000],k=0;
    	int temp=small[num]; count=0;
    	while(num!=1)
    	{
    	if(temp==small[num])
    	count++;
    	else
    	{
    		temp=small[num];
    		c[k++]=count;
    		count=1;
    	}
    	num/=small[num];
    	}
    	c[k]=count;
    	sort(c,c+(k+1),greater<int>());
    	cout<<c[0]<<endl;
        }
        return 0;
    }
