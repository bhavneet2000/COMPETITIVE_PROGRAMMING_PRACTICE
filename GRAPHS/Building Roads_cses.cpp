#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> cities;
vector<int> roads;
vector<bool> visited;
int n,m,c;
void dfs(int n){
    visited[n]=1;
    for(auto i:cities[n]){
        if(!visited[i]){
            dfs(i);
        }
    }
}
void count_roads(){
    for(auto i = 1; i <= n; ++i)
	{
		if(!visited[i])
		{
			c++;
			roads.push_back(i);
			dfs(i);
		}
	}

}

int main()
{
	fio;
    cin>>n>>m;
    cities.resize(n+1);
    visited.resize(n+1);

    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        cities[x].push_back(y);
        cities[y].push_back(x);
    }
	count_roads();
    cout<<c-1<<en;
    if(c>1){
        int t1=roads[0];
        for(auto i=1; i<c; i++){
            cout<<t1<<" "<<roads[i]<<" ";
            t1 = roads[i];
        }
    }
		
	return 0;
}
