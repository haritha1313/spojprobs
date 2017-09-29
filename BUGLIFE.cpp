#include <bits/stdc++.h>
using namespace std;

int bfs(int s, bool visited[], char color[], vector <int> bugs[],int h)
{
	queue <int> q;
	q.push(s);
	if(h==1)
	{
		color[s]='a';
	}
	h++;
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		for(int m=0;m<bugs[p].size();m++)
		{
			if(color[p]==color[bugs[p][m]])
			return 2;
			if(visited[bugs[p][m]]==false)
			{
				if(color[p]=='a')
				{
					color[bugs[p][m]]='b';
				}
				else
				{
					color[bugs[p][m]]='a';
				}
				q.push(bugs[p][m]);
				visited[bugs[p][m]]=true;
			}
		}
	}
	return 1;
}
int main() {
	int t,a,b;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long int no, inter;
		cin>>no>>inter;
		
		bool visited[no+1];
		for(int j=0;j<=no;j++)
		visited[j]=false;
		char color[no+1]={'c'};
		
		vector <int> bugs[no+1];
		for(int j=0;j<inter;j++)
		{
			cin>>a>>b;
			bugs[a].push_back(b);
			bugs[b].push_back(a);
		}
		
		int flag=0;
		for(int j=1;j<=no;j++)
		{
			if(visited[j]==false)
			{
				//cout<<"hi"<<i<<" "<<j<<" ";
				if(bfs(j, visited, color, bugs,1)==2)
				{cout<<"Scenario #"<<i<<":\nSuspicious bugs found!\n"; flag=1;break;}
				else
				continue;
			}
		}
		if(flag==0)
		cout<<"Scenario #"<<i<<":\nNo suspicious bugs found!\n";
	}
	return 0;
}
