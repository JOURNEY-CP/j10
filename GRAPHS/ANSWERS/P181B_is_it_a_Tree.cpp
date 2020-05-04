#include <bits/stdc++.h>
using namespace std;
vector<int>adj[10005];
bool visited[10005];
 
void dfs(int u)
{
    visited[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]])
        {
        dfs(adj[u][i]);
   
        }
    }
}
int main() {
	
	int n,m,i,count,u,v;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
	    cin>>u>>v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	}
	count=0;
	memset(visited,false,sizeof(visited));
	for(i=1;i<=n;i++)
	{
	    if(!visited[i])
	    {
	        dfs(i);
	        count++;
	    }
	}
	if(count==1 && m==n-1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
