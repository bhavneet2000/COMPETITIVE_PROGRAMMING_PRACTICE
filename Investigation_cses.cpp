#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<pair<ll, ll>>> g;
vector<ll> cost;
vector<ll> route;
vector<ll> MAX;
vector<ll> MIN;
ll mod = 1e9+7;
ll INF = 1e17;
ll m,n;

void dijkstras(){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, 1});
    cost[1]=0;
    route[1]=1;
    while(!pq.empty()){
        ll u = pq.top().second;
        ll c = pq.top().first;
        pq.pop();
        if(cost[u]<c)   continue;
        for(auto e:g[u]){
            ll v=e.first;
            ll d=e.second;
            if(cost[v]<c+d) continue;
            if(cost[v]==c+d){
                route[v]+=route[u];
                route[v]%=mod;
                MAX[v]=max(MAX[v], MAX[u]+1);
                MIN[v]=min(MIN[v], MIN[u]+1);
            }
            else if(cost[v]>c+d){
                route[v]=route[u];
                cost[v] = c+d;

                MAX[v]=MAX[u]+1;
                MIN[v]=MIN[u]+1;
                pq.push({cost[v], v});
            }
        }
    }
}

int main()
{
	fio;
    cin>>n>>m;
    g.resize(n+1);
    cost.resize(n+1);
    route.resize(n+1);
    MAX.resize(n+1);
    MIN.resize(n+1);

    for(ll i=0; i<m; i++){
        ll a,b;
        ll c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    for(ll i=2; i<=n; i++)  cost[i]=INF;

    dijkstras();
	cout<<cost[n]<<" "<<route[n]<<" "<<MIN[n]<<" "<<MAX[n];
		
	return 0;
}
