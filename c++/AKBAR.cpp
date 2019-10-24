#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,r,m;
        cin>>n>>r>>m;
        long long a,b;
        vector<vector<long long> > v(n+1);
        long long i;
        for(i=0;i<r;i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        long long k,src;
        bool opt=true;
        vector<bool> vis(n+1,false);
        //vector<long long> par(n+1,-1);
        vector<long long> dist(n+1,0);
        vector<pair<long long,long long> > route;
        for(i=0;i<m;i++)
        {
            cin>>src>>k;
            route.push_back(make_pair(src,k));
        }
        long long dis;
        for(i=0;i<m;i++)
        {
            pair<long long,long long> tmp=route[i];
            src=tmp.first;
            k=tmp.second;
            queue<long long> q;
            vector<bool> visited(n+1,false);
            if(vis[src]==true)
            {
                opt=false;
                break;
            }
            else
            {
                visited[src]=true;
                dist[src]=0;
                q.push(src);
                //s.insert(src);
                dis=dist[src];
                while(!q.empty())
                {
                    src=q.front();
                    dis=dist[src]+1;
                    q.pop();
                    vector<long long> ::iterator ir;
                    if(vis[src]==false)
                    {
                        if(dis<=k)
                        {
                    for(ir=v[src].begin();ir!=v[src].end();ir++)
                    {
                        if(visited[*ir]==false)
                        {
                            visited[*ir]=true;
                            //s.insert(*ir);
                            dist[*ir]=dis;
                            //par[*ir]=src;
                            q.push(*ir);
                        }
                    }
                        }
                    }
                    else
                    {
                        opt=false;
                    }
                    vis[src]=true;
                    if(opt==false)
                        break;
                }
            }
            if(opt==false)
                break;
        }
        for(i=1;i<=n;i++)
            if(vis[i]==false)
                opt=false;
        if(opt==true)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
