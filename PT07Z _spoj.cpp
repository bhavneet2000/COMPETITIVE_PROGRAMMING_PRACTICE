#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int n;
int ans = 0;
int res;
void dfs(int u, int c){
     if(ans<c){
        ans=c;
        res=u;
    }
    visited[u]=1;
    for(auto v:g[u]){
        if(!visited[v]) dfs(v,c+1);
    }
   
}

int main()
{
	fio;
	cin>>n;
    int a,b;
    g.resize(n+1);
    visited.resize(n+1);
    for(int i=0; i<=n-1; i++){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,0);    
    for(int i=1; i<=n; i++) visited[i]=0;
    ans=0;
    dfs(res, 0);
    cout<<ans;
		
	
	return 0;
}
