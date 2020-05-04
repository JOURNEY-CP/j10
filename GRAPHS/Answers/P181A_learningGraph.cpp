#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)
    return a.first>b.first;
    else
    return a.second>b.second;
}
int main()
{
int n,m,k,i,j,u,v;
cin>>n>>m>>k;
vector<pair<int,int>>adj[n+1];
int a[n+1];
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
for(i=0;i<m;i++)
{
    cin>>u>>v;
    adj[u].push_back(make_pair(v,a[v]));
    adj[v].push_back(make_pair(u,a[u]));
}
for(i=1;i<=n;i++)
{
    sort(adj[i].begin(),adj[i].end(),sortbysecdesc);
}
for(i=1;i<=n;i++)
{
    if(adj[i].size()<k)
    cout<<-1<<endl;
    else
    cout<<adj[i][k-1].first<<endl;
}
}
