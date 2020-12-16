#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int n,m;
vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<pair<int, int>>> path;
vector<vector<bool>> visited;
int sx, sy, ey, ex;
bool is_valid(int x, int y){
    if(x>=n || x<0 || y>=m || y<0)  return 0;
    if(visited[x][y])   return 0;
    return 1;
}
void bfs(){
    queue<pair<int, int>> q;
    q.push({sx, sy});
    while(!q.empty()){
        int tx = q.front().first;
        int ty = q.front().second;
        q.pop();
        for(auto mv: moves){
            int mx = mv.first;
            int my = mv.second;
            if(is_valid(mx+tx, my+ty)){
                q.push({mx+tx, my+ty});
                visited[mx+tx][my+ty] = 1;
                path[mx+tx][my+ty] = {mx, my};
            }
        }

    }
}


int main()
{
	fio;
	cin>>n>>m;
    path.resize(n);
    visited.resize(n);
    for(int i=0; i<n; i++){
        visited[i].resize(m);
        path[i].resize(m);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            path[i][j]={-1, -1};
            char c;
            cin>>c;
            if(c=='#')  visited[i][j]=1;
            else if(c=='A'){
                sx=i;
                sy=j;
            }
            else if(c=='B'){
                ex=i;
                ey=j;
            }
        }
    }

    bfs();
	
    if(!visited[ex][ey]){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<en;
    vector<pair<int, int>> ans;
    pair<int, int> end = {ex, ey};
    while(end.first!=sx || end.second!=sy){
        ans.push_back(path[end.first][end.second]);
        end.first-=ans.back().first;
        end.second-=ans.back().second;
    }
    cout<<ans.size()<<en;
    reverse(ans.begin(), ans.end());
    for(auto it: ans){
        if(it.first == 0 && it.second == 1){
            cout<<"R";
        }
        else if(it.first == 1 && it.second == 0){
            cout<<"D";
        }
        else if(it.first == -1 && it.second == 0){
            cout<<"U";
        }
        else if(it.first == 0 && it.second == -1){
            cout<<"L";
        }
    }

	return 0;
}
