#include<bits/stdc++.h>
using namespace std;
int bfs(int b[101]){

   list<int> queue; 
   int src=1;
   int v=101;
    bool visited[v]; 
    int dist[v];
    int pred[v];
    
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
  
   
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 1; i <=6&&u+i<=100; i++) { 
            if (visited[b[u+i]] == false) { 
                visited[b[u+i]] = true; 
                dist[b[u+i]] = dist[u] + 1; 
                pred[b[u+i]] = u; 
                queue.push_back(b[u+i]); 
  
              
            } 
        } 
    } 
    if(dist[100]==INT_MAX)
        return -1;
    else {
    return dist[100];
    }
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
 
  int b[101];
  for(int i=1;i<=100;i++){
    b[i]=i;
  }
  int l;
  cin>>l;
  for(int i=0;i<l;i++){
    int u,v;
    cin>>u>>v;
    b[u]=v;
  }
  int s;
  cin>>s;
  for(int i=0;i<s;i++){
    int u,v;
    cin>>u>>v;
    b[u]=v;
  }
   
  cout<<bfs(b)<<'\n'; 


}
}
