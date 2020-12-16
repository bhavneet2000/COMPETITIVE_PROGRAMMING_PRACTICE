#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g(1000001);
vector<bool> visited(1000001);
vector<int> level(1000001);
vector<int> dist(1000001);
int src,d;

void bfs(int u){
    visited[u]=1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(auto v:g[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                dist[v] = dist[u]+1;
                level[dist[v]]++;
            }
        }
    }
}


int main()
{
	fio;
	int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int q;
    cin>>q;
    while (q--)
    {
        cin>>src>>d;
        for(int i=0; i<=n; i++){
            visited[i]=0;
            level[i]=0;
            dist[i]=0;
        }
        bfs(src);
        cout<<level[d]<<en;
    }
    
		
		
	return 0;
}
