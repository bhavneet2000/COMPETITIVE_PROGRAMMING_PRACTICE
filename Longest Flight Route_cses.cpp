#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<pair<int, int>>> g;
vector<int> dist;
vector<int> parent; 
int n,m;

void dijkstras(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1});
    dist[1]=0;
    parent[1]=-1;
    while(!pq.empty()){
        int u=pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if(dist[u]<d)   continue;
        for(auto e:g[u]){
            int v=e.first;
            int c = e.second;
            if(dist[v]>dist[u]+c){
                dist[v]=dist[u]+c;
                pq.push({dist[v], v});
                parent[v]=u;
            }
        }
    }
}

int main()
{
	fio;
	cin>>n>>m;
    dist.resize(n+1);
    parent.resize(n+1, -1);
    g.resize(n+1);
	
	for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back({b, -1});
    }
    dijkstras();

    if(dist[n]==0)  cout<<"IMPOSSIBLE";
    else{
        cout<<-1*dist[n] + 1<<en;
        int temp=n;
        vector<int> ans;
        while (temp!=-1)
        {
            ans.push_back(temp);
            temp=parent[temp];
        }
        reverse(ans.begin(), ans.end());
        for(auto c:ans){
            cout<<c<<" ";
        }
    }
		
	return 0;
}
