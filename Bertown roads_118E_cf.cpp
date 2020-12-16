#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
vector<int> in, lo;
int n,m,timer;
bool hasBridge;
vector<pair<int , int >> vp;
void dfs(int u, int par){
    visited[u]=1;
    in[u] = lo[u] = timer++;
    for(auto v:g[u]){
        if(v==par)  continue;
        if(!visited[v]){
            dfs(v, u);
            if(lo[v] > in[u]){
                hasBridge = 1;
                return;
            }
            vp.push_back({u, v});
            lo[u] = min(lo[v], lo[u]);
        }
        else{
            lo[u] = min(lo[u], in[v]);
            if(in[u] > in[v]){
                vp.push_back({u, v});
            }
        }
    }
}


int main()
{
	fio;
    cin>>n>>m;
    g.resize(n+1);
    visited.resize(n+1);
    in.resize(n+1);
    lo.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
	dfs(1, -1);
	if(hasBridge)   cout<<0;
    else{
        for(auto it:vp){
            cout<<it.first<<" "<<it.second<<en;
        }
    }


	return 0;
}
