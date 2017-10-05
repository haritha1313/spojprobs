#include<bits/stdc++.h>
using namespace std;
bool check[10009];
void s()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        if(!check[i])
        {
            for(j=i*i;j<=10000;j+=i)
            {
                check[j]=true;
            }
        }
    }
}

void nta(int a[],int num)
{
    int d=3;
    while(num>0)
    {
        a[d--]=num%10;
        num/=10;
    }
}

int atn(int a[])
{
    int temp=0,k=0;
    while(k<4)
    {
        temp=temp*10+a[k];
        k++;
    }
    return temp;
}

int main()
{
    int t;
    scanf("%d",&t);
    s();
    while(t--)
    {
        int a,b,parent[10009],distance[10009],digit[4];
        cin>>a>>b;
        queue<int> q;
        memset(parent,-1,sizeof(parent));
        memset(distance,-1,sizeof(distance));
        distance[a]=0;
        parent[a]=0;
        q.push(a);
        while(!q.empty())
        {
            int num=q.front();
            for(int k=3;k>=0;k--)
            {
                nta(digit,num);
                for(int i=0;i<=9;i++)
                {
                    digit[k]=i;
                    int temp=atn(digit);
                    if((!check[temp])&&(distance[temp]==-1)&&(temp>1000))
                    {
                        distance[temp]=distance[num]+1;
                        parent[temp]=num;
                        q.push(temp);
                    }
                }
            }
            q.pop();
        }
        if(distance[b]==-1)
        {
            printf("impossible\n");
        }
        else
        printf("%d\n",distance[b]);
    }
    return 0;
}