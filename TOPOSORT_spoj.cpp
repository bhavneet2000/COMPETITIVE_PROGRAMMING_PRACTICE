#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<int> indegree;
vector<int> top_sort;
int n,m;
void kahn(int u){
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=1; i<=n; i++){
        if(!indegree[i])    q.push(i);
    }
    while(!q.empty()){
        u = q.top();
        top_sort.push_back(u);
        q.pop();
        for(auto v:g[u]){
            indegree[v]--;
            if(indegree[v] == 0){
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
    indegree.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        indegree[b]++;
    }
    kahn(1);
    if(top_sort.size()!=n){
        cout<<"Sandro fails.";
        return 0;
    }
	for(auto v:top_sort){
        cout<<v<<" ";
    }
		
	return 0;
}
