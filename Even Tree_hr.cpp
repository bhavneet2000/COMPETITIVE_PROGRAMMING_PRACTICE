#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<set<int>> g;
vector<bool> visited;
int n,m;
int temp,ans=0;
int dfs(int s){
    if(visited[s]) return 0;
    visited[s]=true;
    int temp=0;
    for(auto u:g[s])
    {
        temp+=dfs(u);
    }
    if(temp%2) ans++;
    return temp+1;

}


int main()
{
    fio;
    cin>>n>>m;
    g.resize(n+1);
    int i;
    visited.resize(n+1);
    for(i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        g[a].insert(b);
        g[b].insert(a);
    }
    dfs(1);

    cout<<ans-1;

    return 0;
}
