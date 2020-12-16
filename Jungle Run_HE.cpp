#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<bool>> visited;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};
vector<vector<int>> dist;
int n;
bool is_valid(int x, int y){
    if(x<1 || y<1 || x>n || y>n)    return false;
    if(visited[x][y])               return false;
    return true;

}
void bfs(int x, int y){
    queue<pair<int, int>> q;
    visited[x][y]=1;
    q.push({x,y});
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            if(is_valid(x+dx[i], y+dy[i])){
                int x1 = x+dx[i], y1 = y+dy[i];
                visited[x1][y1] = 1;
                dist[x1][y1] = dist[x][y] + 1;
                q.push({x1, y1});
            }
        }
    }
}

int main()
{
	fio;
	cin>>n;
    char c;
    int start_x, start_y, end_x, end_y;
    visited.resize(n+1);
    dist.resize(n+1);
    for(int i=1; i<=n; i++){
        visited[i].resize(n+1);
        dist[i].resize(n+1);
        for(int j=1; j<=n; j++){
            cin>>c;
            if(c=='S'){
                start_x = i;
                start_y = j;
            }
            else if(c=='E'){
                end_x = i;
                end_y = j;
            }
            else if(c=='T'){
                visited[i][j]=1;

            }
        }
    }
    bfs(start_x, start_y);
    cout<<dist[end_x][end_y];
	
	return 0;
}
