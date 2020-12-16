#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<pair<ll, ll>>> g;
vector<vector<ll>> dist;
ll n,m,k;
const ll INF = 1e17;

void dijkstras(){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0,1});
    while (!pq.empty()){
        ll u = pq.top().second;
		ll d = pq.top().first;
		pq.pop();
 
		if(dist[u][k-1] < d) continue;
 
		for(auto e: g[u])
		{
			ll v = e.first;
			ll c = e.second;
 
			if(dist[v][k-1] > c+d) 
			{
				dist[v][k-1] = c+d;
				pq.push({dist[v][k-1], v});
				sort(dist[v].begin(), dist[v].end());
			}
		}
    }
    
}


int main()
{
	fio;
	cin>>n>>m>>k;
    g.resize(n+1);
    dist.resize(n+1);
    

    for(ll i = 1; i <= n; i++)
	{
		dist[i].resize(k);
		for(ll j = 0; j <k; ++j)
		{
			dist[i][j] = INF;
		}
	}

	dist[1][0] = 0;

    for(ll i=0; i<m; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b, c});
    }

    dijkstras();
	
    for(ll i=0; i<k; i++){
        cout<<dist[n][i]<<" ";
    }
	return 0;
}
