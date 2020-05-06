#include <bits/stdc++.h>
using namespace std;
vector<int>adj[10005];
bool visited[10005];
int level[10005];
void dfs(int u,int l)
{
    visited[u]=true;
    level[u]=l;
    for(int i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]])
        dfs(adj[u][i],level[u]+1);
    }
}
int maxl(int n){
    int max1=0,max2=0,i;
 	for(i=1;i<=n;i++)
    {
        if(level[i]>max1)
        {
            max1=level[i];
            max2=i;
        }
    }
    return max2;
}
int main() {
    int n,u,v,i,max2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited,false,sizeof(visited));
    dfs(1,0);
  	 max2=maxl(n);
    memset(visited,false,sizeof(visited));
    dfs(max2,0);
    max2=maxl(n);
    cout<<level[max2]<<endl;
	return 0;
}
