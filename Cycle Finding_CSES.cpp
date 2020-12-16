#include <bits/stdc++.h>
#define ll long long int
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

struct triplet{
    ll first;
    ll second;
    ll third;
};
ll n,m;
vector<triplet> g;
vector<ll> dist;
vector<ll> cycle;
vector<ll> relaxant;

void bellman(){
    ll x=-1;
    for(ll i=1; i<=n; i++){
        x = -1;
		for(auto e: g)
		{
 
			ll u = e.first;
			ll v = e.second;
			ll d = e.third;
			if(dist[u]+d < dist[v])
			{
				dist[v] = d+dist[u];
				relaxant[v] = u;
				x = v;
			}
		}
    }
    if(x==-1)   cout<<"NO";
    else{
        cout<<"YES"<<en;
        for(ll i=1; i<=n; i++){
            x=relaxant[x];
        }
        for(auto v = x; ;v=relaxant[v]){
            cycle.push_back(v);
            if(cycle.size()>1 && v==x)  break;
        }
        reverse(cycle.begin(), cycle.end());
        for(auto c: cycle){
            cout<<c<<" ";
        }
    }

}

int main()
{
	fio;
    cin>>n>>m;
    dist.resize(n+1);
    relaxant.resize(n+1);

    ll i;
	for(i=0; i<m; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        g.push_back({a,b,c});
    }
	bellman();
    

	return 0;
}
