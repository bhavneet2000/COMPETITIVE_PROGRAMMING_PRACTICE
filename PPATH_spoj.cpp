#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g(10000);
vector<bool> visited(10000);
vector<int> dist(10000);
vector<int> prime;

bool isprime(int n){
    for(int i=2; i*i<=n; i++){
        if((n%i) == 0)    return 0;
    }
    return 1;
}

bool isValid(int a, int b){
    int c=0;
    while(a>0){
        if(a%10!=b%10)  c++;
        a/=10;
        b/=10;
    }
    if(c==1)    return 1;
    return 0;
}


void createGraph(){
    for(int i=1000; i<=9999; i++){
        if(isprime(i)){
            prime.push_back(i);
        }
    }
    for(int i=0; i<prime.size(); i++){
        for(int j=i+1; j<prime.size(); j++){
            int a = prime[i];
            int b = prime[j];
            if(isValid(a,b)){    
                g[a].push_back(b);
                g[b].push_back(a);
            }
        }
    }
}

void bfs(int u){
    visited[u]=1;
    dist[u]=0;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        u=q.front();
        q.pop();
        for(auto v:g[u]){
            if(!visited[v]){
                q.push(v);
                visited[v] = 1;
                dist[v] = dist[u]+1;
            }
        }
    }
    
}


int main()
{
	fio;
	int t;
	cin>>t;
    createGraph();
	while(t--){
	    int a,b;
        cin>>a>>b;
        for(int i=1000; i<=9999; i++) visited[i]=0,dist[i]=-1;
        bfs(a);
        if(dist[b]==-1) cout<<"Impossible"<<en;
        else{
            cout<<dist[b]<<en;
        }
	}
		
		
	return 0;
}
