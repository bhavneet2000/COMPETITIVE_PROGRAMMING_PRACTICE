#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<vector<ll>> g;
vector<bool> visited;
vector<vector<ll>> path_way;
ll n, q;
vector<ll> w;
vector<vector<ll>> F;

void path(ll u){
    visited[u]=1;
    queue<pair<ll, ll>> q;
    q.push({u, -1});
    
    while(!q.empty()){
        int u = q.front().first;
        int par = q.front().second;
        q.pop();
        visited[u]=1;
        for(auto v:g[u]){
            if(visited[v])  continue;
            q.push({v, u});
            path_way[v] = path_way[u];
            path_way[v].push_back(u);
        }
    }

}
int main()
{
	fio;
	ll u, v;
    cin>>n>>q;
    g.resize(n+1);
    visited.resize(n+1);
    w.resize(n+1);
    for(ll i=1; i<n+1; i++){
        cin>>w[i];
    }
    for(ll i=0; i<n-1; i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    path_way.resize(n+1);
	path(1);
	F.resize(n+1);
    for(ll i=1; i<n+1; i++){
        F[i].push_back(w[i]);
        for(auto it=path_way[i].rbegin(); it!=path_way[i].rend(); it++){
            F[i].push_back(w[*it]);
        }
    }

    while(q--){
        cin>>u>>v;
        ll ans=0;
        vector<ll> t1, t2;
        for(auto it:F[u]){
            t1.push_back(it);
        }
        for(auto it:F[v]){
            t2.push_back(it);
        }
        for(ll i=0; i<min(t1.size(), t2.size()); i++){
            ans+=t1[i]*t2[i];
        }
        cout<<ans<<en;
    }
    // while(q--){
    //     ll a, b;
    //     cin>>a>>b;
    //     ll ans=0;
    //     cout<<F[a].size()<<F[b].size();
    //     cout<<en;
    // }

     
    
    

	return 0;
}
