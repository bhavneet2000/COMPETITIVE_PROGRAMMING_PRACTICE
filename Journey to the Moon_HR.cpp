#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int n,m;
void dfs(int s, int &ans){
    if(visited[s]) return;
    ans++;
    visited[s]=true;
    for(auto c:g[s])
    {
        dfs(c, ans);
    }
}


ll visit_all(){
    ll sum=0;
    vector<int> ar;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            int ans=0;
            dfs(i,ans);
            sum+=ans;
            ar.push_back(ans);
        }
    }

    ll res=0;
    for(int i=0; i<ar.size(); i++){
            sum=sum-ar[i];
            res+=sum*ar[i];

    }
    return res;
}

int main()
{
	fio;
    cin>>n>>m;
	g.resize(n);
    visited.resize(n,0);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cout<<visit_all();
	return 0;
}
