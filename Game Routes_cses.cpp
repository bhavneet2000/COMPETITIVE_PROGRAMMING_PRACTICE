#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<ll>> g;
vector<ll> cnt;
vector<ll> indegree;
ll mod = 1e9+7;
ll n,m;

void top_sort(){
    queue<ll> pq;
    for(ll i=2; i<=n; i++){
        if(!indegree[i])    pq.push(i);
    }
    while(!pq.empty()){
        ll u = pq.front();
        pq.pop();
        for(auto v:g[u]){
            indegree[v]--;
            if(!indegree[v])    pq.push(v);
        }
    }
    pq.push(1);
    cnt[1]=1;
    while(!pq.empty()){
        ll u = pq.front();
        pq.pop();
        for(auto v:g[u]){
            indegree[v]--;
            cnt[v] = cnt[v] + cnt[u];
            cnt[v]%=mod;
            if(!indegree[v])    pq.push(v);
        }
    }
}

int main()
{
	fio;
	cin>>n>>m;
    g.resize(n+1);
    cnt.resize(n+1);
    indegree.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        indegree[b]++;
    }
	top_sort();

    cout<<cnt[n];

	return 0;
}
