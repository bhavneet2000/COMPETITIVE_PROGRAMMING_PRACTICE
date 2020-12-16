#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int n,m;
int c=0;
void dfs(int u){
    visited[u]=1;
    for(auto v:g[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
void visit_all(){
    for(int i=1; i<=n; i+=1){
        if(!visited[i]){
            dfs(i);
            c++;
        }
    }
}


int main()
{
	fio;
    cin>>n>>m;
    g.resize(n+1);
    visited.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
	visit_all();
    if(c==1 && m==n-1)  cout<<"YES";
    else                cout<<"NO";
		
	return 0;
}
