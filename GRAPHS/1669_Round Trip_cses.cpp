#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
vector<int> parent;
int n,m;

int s, e;
bool dfs(int u, int p){
    parent[u]=p;
    visited[u]=1;
    for(auto v:g[u]){
        if(v==p)    continue;
        if(visited[v]){
            s = v;
            e = u;
            return 1;
        }
        if(!visited[v]){
            if(dfs(v, u))   return 1;
        }
    }
    return 0;
}
bool visit_all(){
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(dfs(i, -1))
                return 1;
        }
    }
    return 0;
}

int main()
{
	fio;
    cin>>n>>m;
    g.resize(n+1);
	visited.resize(n+1);
    parent.resize(n+1);
    int i;
    int a,b;
    for(i=0; i<m; i++){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
        
    }
    

    if(!visit_all()){
        cout<<"IMPOSSIBLE";
        return 0;
    }
	int temp=e;
    vector<int> res;
    res.push_back(temp);
    while(temp!=s){
        res.push_back(parent[temp]);
        temp = parent[temp];
    }
    res.push_back(e);
    cout<<res.size()<<en;
    for(auto it:res){
        cout<<it<<" ";
    }
	return 0;
}
