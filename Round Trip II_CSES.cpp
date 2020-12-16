#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
vector<bool> sFlag;
stack<int> s;
int n,m;

bool dfs(int u){
    visited[u]=1;
    s.push(u);
    sFlag[u]=1;
    for(auto v:g[u]){
        if(!visited[v]){
            if(dfs(v)){
                return 1;
            }
        }
        if(sFlag[v]==1){
            s.push(v);
            return 1;
        }
    }
    s.pop();
    sFlag[u]=0;
    return 0;
}



bool visit_all(){
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(dfs(i))  return true;
        }
    }
    return false;
}


int main()
{
	fio;
	
	cin>>n>>m;
    g.resize(n+1);
    visited.resize(n+1);
    sFlag.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
   }    
		
    if(!visit_all()){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<int> cycle;
    int temp = s.top();
    while(!s.empty()){
        cycle.push_back(s.top());
        s.pop();
        if(cycle.back()==temp && cycle.size()>1) break;
    }
	
    reverse(cycle.begin(), cycle.end());
    cout<<cycle.size()<<en;
    for(auto c:cycle){
        cout<<c<<" ";
    }
	return 0;
}
