#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int n,m;
vector<int> team;
vector<vector<int>> g;
vector<bool> visited;
bool bfs(int start){
    
    queue<int> q;
    q.push(start);
    
    
    visited[start]=1;
    team[start]=1;
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        for(auto edge:g[u]){
            if(team[u]==team[edge]){
                return 0;
            }
            if(!visited[edge]){
                visited[edge]=1;
                team[edge]=3-team[u];
                q.push(edge);
            }
        }
    }
    return 1;
}
bool teams(){
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(!bfs(i)){
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
	fio;
	
    cin>>n>>m;
	g.resize(n+1);
    visited.resize(n+1);
    team.resize(n+1);

    int i;
    for(i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    
    if(!teams())    cout<<"IMPOSSIBLE";
    else{
        for(i=1; i<(int)team.size(); i++){
            cout<<team[i]<<" ";
        }
    }
		
	return 0;
}
