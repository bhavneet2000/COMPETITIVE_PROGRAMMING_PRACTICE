#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

typedef pair<int,int> pi;

int main() {
  int t; 
  cin>>t; 
  while(t--){
    vector<int> graph[1000010];
    vector<int> done(1000010,0); 
    vector<bool> visited(1000010,false); 
    vector<int> dist(1000010,0);
    vector<pi> soldiers; 
    bool valid = true; 
    int n,r,m;
    cin>>n>>r>>m; 
    for(int i=0; i<r; i++){
      int a, b;
      cin>>a>>b; 
      graph[a].push_back(b); 
      graph[b].push_back(a); 
    }
    for(int i=0; i<m;i++){
      int a,b; 
      cin>>a>>b; 
      soldiers.push_back({a,b}); 
    }
    
    for(int i=0;i<soldiers.size();i++){
      int u = soldiers[i].first ;
      int strength = soldiers[i].second; 
      queue<int> q; 
      q.push(u); 
      visited[u] = true; 
      dist[u] = 0;
      while(!q.empty()) {
        int curr_node = q.front(); 
        q.pop(); 
        
        if(strength < dist[curr_node]) // cannot be explored, as we don't have the strenght 
          break; 
        if(done[curr_node] ==1 ){      //one soldier has explored it already, so this is not optimal 
          valid = false; 
          break; 
        }
        
        
        for(int i : graph[curr_node]){
          if(visited[i]==false){
            dist[i] = dist[curr_node] + 1; 
            if(dist[i]<= strength)
              visited[i] = true;  // it won't be explored by the current node, so leave if for other soldiers
            q.push(i); 
          }
        }
        done[curr_node] =1;  // explored it completely 
        
      }
      if(!valid)
        break; 
    }
    for(int i=1; i<=n; i++){
      if(done[i] == 0){           // check whether we missed some node 
        //cout<<i<<"\n";
        valid = false; 
        break; 
      }
    }
    if(valid)cout<<"Yes"<<"\n"; 
    else cout<<"No"<<"\n";
    
    
  }
  
}
