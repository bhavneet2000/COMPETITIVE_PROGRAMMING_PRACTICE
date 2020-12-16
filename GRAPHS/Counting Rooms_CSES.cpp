#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int n,m, rooms;
vector<vector<bool>> visited;
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j){
    if(i>=n || i<0 || j>=m || j<0){
        return 0;
    }
    if(visited[i][j])   return 0;

    return 1;
}

void dfs(int i, int j){
    visited[i][j]=1;
    for(auto it:moves){
        if(is_valid(i+it.first, j+it.second)){
            dfs(i+it.first, j+it.second);
        }
    }
}

void connected_comp(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j]==0){
                dfs(i, j);
                rooms++;
            }
        }
    }
}

int main()
{
	fio;
	
    cin>>n>>m;
    visited.resize(n);
    for(int i=0; i<n; i++){
        visited[i].resize(m);
    }
    char c;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>c;
            if(c=='#')  visited[i][j]=1;
        }
    }
	
    connected_comp();
    cout<<rooms;

		
	return 0;
}
