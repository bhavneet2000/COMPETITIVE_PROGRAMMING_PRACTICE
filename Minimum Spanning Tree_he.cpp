#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

struct edge{
    int a;
    int b;
    int w;
};

int n,m;
vector<edge> g;
vector<int> parent;

bool myCmp(edge a, edge b){
    if(a.w<b.w) return true;
    return false;
}

int find(int x){
    if(parent[x] == -1)    return x;
    
    return parent[x] = find(parent[x]);
}

void merge(int a, int b){
    parent[a] = b;
}

int main()
{
	fio;
	cin>>n>>m;
    parent.resize(n+1, -1);
    g.resize(n+1);
    for(int i=0; i<m; i++){
        cin>>g[i].a>>g[i].b>>g[i].w;
    }
    sort(g.begin(), g.end(), myCmp);

    int sum=0;
    for(int i=0; i<n; i++){
        int a = find(g[i].a);
        int b = find(g[i].b);
        if(a!=b){
            sum+=g[i].w;
            merge(a, b);
        }
    }
		cout<<sum;
		
	return 0;
}
