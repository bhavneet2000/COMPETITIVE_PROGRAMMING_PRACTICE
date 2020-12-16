#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<ll>> g;
vector<bool> visited;
vector<ll> res;
ll n,q;
ll x,k,temp;
void dfs(ll u){
    for(auto v:g[u]){
        temp=v;
        k--;
        dfs(v);
        
        if(k==0)    break; 
    }
}


int main()
{
	fio;
	cin>>n>>q;
    g.resize(n+1);
    for(ll i=1; i<=n; i++){
        ll t;
        cin>>t;
        g[i].push_back(t);
    }
	while(q--){
        cin>>x>>k;
        dfs(x);
        cout<<temp<<en;
    }
		
	return 0;
}
