#include<bits/stdc++.h>
using namespace std;
#define mp make_pair;
int main()
{
    int q,n,m,u,v,i,s;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        vector<int>adj[1005];
        bool visited[1005]={false};
        long long int distance[1005];
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>s;
         distance[s]=0;
        queue<int>q;
        q.push(s);
         visited[s]=true;
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            for(i=0;i<adj[u].size();i++)
            {
                if(!visited[adj[u][i]])
                {
                    visited[adj[u][i]]=true;
                    distance[adj[u][i]]=distance[u]+6ll;
                    q.push(adj[u][i]);
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i!=s)
            {
            if(visited[i])
            cout<<distance[i]<<" ";
            else
            cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
}

