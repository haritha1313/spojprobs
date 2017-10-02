/*#########################################
#
#	achie27
#	AC
#
#########################################*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

typedef vector< vector<int> > graph;
typedef int vertex;

void bfs(bool *saw, graph &gr, int s=0){
	saw[s]=true;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		vector<int>::iterator it;
		for(it=gr[u].begin(); it!=gr[u].end(); it++){
			if(!saw[*it]){
				saw[*it]=true;
				q.push(*it);
			}
		}
	}
}

int main(){

	int n, e, i, u, v;
	cin>>n>>e;
	
	graph g(n);

	for(i=0; i<e; i++){
		cin>>u>>v;
		g[u-1].push_back(v-1);
		g[v-1].push_back(u-1);
	}

	if(e!=n-1){
		cout<<"NO"<<endl;
		return 0;
	}

	bool chk[n];
	memset(chk, 0, sizeof(chk));

	bfs(chk, g, 0);
	bool* b=find(chk, chk+n, false);
	if(b==chk+n)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
