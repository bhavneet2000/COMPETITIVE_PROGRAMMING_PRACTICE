#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g(2001);
vector<bool> visited(2001);
vector<int> gender(2001);
bool dfs(int u, int c){
    visited[u]=1;
    gender[u]=c;
    for(auto v:g[u]){
        if(!visited[v]){
            if(!dfs(v,c^1)){
                return 0;
            }
        }
        else{
            if(gender[v]==gender[u])    return 0;
        }
    }
    return 1;
}
bool isBipartite(int n, int m){
    bool flag=1;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            flag = dfs(i,1);
            if(!flag)   break;
        }
    }
    return flag;
}

int main()
{
	fio;
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
        int n,m;
        cin>>n>>m;

        for(int j=1; j<=n; j++){
            g[j].clear();
            visited[j]=0;
        }


        cout<<"Scenario #"<<i<<":"<<en;
        for(int j=0; j<m; j++){
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if(!isBipartite(n, m)){
            cout<<"Suspicious bugs found!"<<en;
        }
        else{
            cout<<"No suspicious bugs found!"<<en;

        }

	}
		
		
	return 0;
}
