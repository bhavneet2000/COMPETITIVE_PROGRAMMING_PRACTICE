#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<ll>> g;
vector<bool> visited;
ll n,m,cl,cr;
void dfs(ll u, ll &roads){
    visited[u]=1;
    for(auto v:g[u]){
        if(!visited[v]){
            roads++;
            dfs(v, roads);
        }
        
    }
}


void visit_all(ll &libs, ll &roads){
    for(ll i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i, roads);
            libs++;
        }
    }
}

int main()
{
	fio;
	ll t;
	cin>>t;
	while(t--){
	    cin>>n>>m>>cl>>cr;
        g.resize(n+1);
        for(ll i=0; i<m; i++){
            ll u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if(cl<=cr){
            cout<<n*cl<<en;
            continue;
        }
        visited.resize(n+1);
        ll libs=0,roads=0;
        visit_all(roads, libs);
        cout<<roads*cr + libs*cl<<en;
	}
		
		
	return 0;
}
