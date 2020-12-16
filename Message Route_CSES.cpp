#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int n,m;
vector<int> parent;
void bfs(){
    visited[1]=1;
    parent[1]=-1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:g[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                parent[v]=u;
            }
        }
    }
}

int main()
{
	fio;
	int n,m;
    cin>>n>>m;

	g.resize(n+1);
    visited.resize(n+1);
    parent.resize(n+1, -1);

    int i;
    for(i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs();
    if(parent[n]==-1)   cout<<"IMPOSSIBLE";
    else{
        stack<int> s;
        int temp=n;
        while(temp!=-1){
            s.push(temp);
            temp=parent[temp];
        }
        cout<<s.size()<<en;
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
	return 0;
}
