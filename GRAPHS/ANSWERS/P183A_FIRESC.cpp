#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 bool visited[100005];
 ll count2;
 ll p=1000000007;
void dfs(ll u,vector<ll>adj[])
{
    ll i;
    visited[u]=true;
    count2++;
    for(i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]])
        dfs(adj[u][i],adj);
    }
}
int main() {
		ll t,n,m,i,u,v;
		cin>>t;
		while(t--){
	    cin>>n>>m;
	    vector<ll>adj[100005];
	    for(i=0;i<m;i++)
	    {
	        cin>>u>>v;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	   
	    memset(visited,false,sizeof(visited));
	    ll connected=0;
	    long long int product=1;
	    
	    for(i=1;i<=n;i++)
	    {
	      
	        if(!visited[i])
	        {
	              count2=0;
	           dfs(i,adj);
	            connected++;
	            product=((product%p)*(count2%p))%p;
	            
	        }
	        
	    }
	    
	    
	    cout<<connected<<" "<<(product)<<"\n";
}
}
