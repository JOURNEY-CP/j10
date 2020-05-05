#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Count;
bool visited[100005]={false};
vector<int>adj[100005];
void dfs(int u)
{
    visited[u]=true;
    Count++;
    for(int i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]]){
        dfs(adj[u][i]);
        }
    }
}
int main()
{
    int n,p,u,v,i;
    cin>>n>>p;
    for(i=0;i<p;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int j=0;
     ll pairs[100005];
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            Count=0;
        dfs(i);
        pairs[j++]=Count;
        }
    }
     ll sum[j];
    sum[0]=pairs[0];
    for(i=1;i<j;i++)
    {
        sum[i]=sum[i-1]+pairs[i];
    }
     ll ans=0;
    for(i=0;i<j;i++)
    {
        ans=ans+(sum[j-1]-sum[i])*pairs[i];
    }
    cout<<ans;
}

