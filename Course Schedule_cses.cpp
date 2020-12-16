#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<int> inDegree;
int n,m;
priority_queue<int, vector<int>, greater<int>> q;
vector<int> res;
void topologicalSort(){
    for(int i=1; i<=n; i++){
        if(!inDegree[i]){    
            q.push(i);
        }
    }
    while(!q.empty()){
        int u = q.top();
        q.pop();
        res.push_back(u);
        for(auto v:g[u]){
            inDegree[v]--;
            if(!inDegree[v]){    
                q.push(v);
            }
        }
    }
}

int main()
{
	fio;
	cin>>n>>m;
    g.resize(n+1);
    inDegree.resize(n+1);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        inDegree[v]++;
    }
	
    topologicalSort();
	
    if(res.size()!=n)  cout<<"IMPOSSIBLE";
    else{
        for(auto r:res){
            cout<<r<<" ";
        }
    }    
	return 0;
}
