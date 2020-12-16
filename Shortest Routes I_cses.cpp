#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<pair<ll, ll>>> g;
vector<ll> dis;
ll MAXD = 1e17;
ll n,m;

void dijkstra(){

    dis[1]=0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        ll d = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        if(d>dis[u])    continue;
        for(auto e: g[u])
		{
			int v = e.first;
			int c = e.second;
			if(dis[v] <= c+d) continue;
			else
			{
				dis[v] = c+d;
				pq.push({dis[v], v});
			}
 
		}


    }

}


int main()
{
	fio;
    cin>>n>>m;
    g.resize(n+1);
    dis.resize(n+1, MAXD);
    ll a,b,c;
    
    for(auto i=0; i<m; i++){
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    dijkstra();
    for(auto i=1; i<=n; i++){
        cout<<dis[i]<<" ";
    }
	
		
	return 0;
}
