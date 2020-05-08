#include <bits/stdc++.h>
using namespace std;
bool visited[2005];
int gender[2005];
int bfs(int u,vector<int>adj[])
{
    int x,v;
    queue<int>q;
    visited[u]=true;
    gender[u]=0;
    q.push(u);
    int flag=1;
    while(!q.empty())
    {
        x=q.front();q.pop();
        for(auto v:adj[x])
        {
            if(visited[v])
            {
                if(gender[x]!=gender[v])
                continue;
                else{
                return -1;
                }
            }
            else if(!visited[v])
            {
                visited[v]=true;
                gender[v]=!(gender[x]);
                q.push(v);
            }
        }
    }
    return 1;
}
int main() {
	int t,n,q,i,u,v,flag,j;
	cin>>t;
	for(j=1;j<=t;j++)
	{
	    cin>>n>>q;
	    vector<int>adj[n+1];
	    memset(visited,false,sizeof(visited));
	    for(i=0;i<q;i++)
	    {
	        cin>>u>>v;
	        adj[u].push_back(v);
	         adj[v].push_back(u);
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(!visited[i])
	        {
	        flag= bfs(i,adj);
	         if(flag==-1)
	         break;
	        }
	    }
	    cout<<"Scenario #"<<j<<":"<<"\n";
	    if(flag==1)
	    {
	        cout<<"No suspicious bugs found!"<<"\n";
	    }
	    else
	    {
	        cout<<"Suspicious bugs found!"<<"\n";
	    }
	    
	}
	return 0;
}
