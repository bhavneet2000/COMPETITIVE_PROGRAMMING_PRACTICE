#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g(10001);
vector<bool> visited(10001);
vector<int> lo(10001), in(10001);
int timer;
set<int> articulate_pt;
void dfs(int u, int par){
    visited[u] = 1;
    lo[u] = in[u] = timer++;
    int con_child = 0;
    for(auto v:g[u]){
        if(v==par)  continue;
        if(!visited[v]){
            dfs(v, u);
            if(lo[v]>=in[u] && par!=-1){
                articulate_pt.insert(u);
            }
            con_child++;
            lo[u] = min(lo[u], lo[v]);
        }
        else{
            lo[u] = min(lo[u], in[v]);
        }
    }
    


}


int main()
{
	fio;
	int n,m;

	while(1){
	    cin>>n>>m;
        if(n==0 && m==0)    break;
        for(int i=1; i<=n; i++) g[i].clear(), visited[i]=0;
        for(int i=0; i<m; i++){
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }  
        timer = 0;
        articulate_pt.clear();
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                dfs(i, -1);
            }
        }

        cout<<articulate_pt.size()<<en;
	}
		
		
	return 0;
}
