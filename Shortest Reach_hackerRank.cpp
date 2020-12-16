#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[],int s,int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}
void bfs(vector<int> adj[],int n,int x,vector<int> &distance)
{
    vector<bool> visited(n,false);
    visited[x]=true;
    distance[x]=0;
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int s=q.front();q.pop();
        for(auto u:adj[s])
        {
            if(visited[u]) continue;
            visited[u]=true;
            distance[u]=distance[s]+6;
            q.push(u);
        }
     } 
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n];
        for(int i=0;i<m;i++)
        {
            int s,d;
            cin>>s>>d;
            addedge(adj,s-1,d-1);
        }
        int start;
        cin>>start;
        vector<int> distance(n,-1);
        bfs(adj,n,start-1,distance);
        for(int i=0;i<n;i++)
        {
            if(i==start-1)continue;
            cout<<distance[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
