#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
const ll INF = 1e17;
vector<vector<ll>> g;
ll n,m, q;
// vector<bool> visited;
int main()
{
	fio;
    ll i;
    cin>>n>>m>>q;
    g.resize(n+1);
    for(i=0; i<=n; i++){
        g[i].resize(n+1);
    }

    for(i=1; i<=n; i++){
        for(ll j=i+1; j<=n; j++){
            g[i][j] = g[j][i] = INF;
        }
    }
    ll u,v,c;
    for(i=0; i<m; i++){
        cin>>u>>v>>c;
        g[u][v] = g[v][u] = min(g[u][v], c);
    }

    for(ll k=1; k<=n; k++){
        for(i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    for(i=0; i<q; i++){
        ll u,v;
        cin>>u>>v;
        if(g[u][v]==INF)    cout<<-1<<en;
        else                cout<<g[u][v]<<en;
    }


		
		
	return 0;
}
