#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g(1000001);
vector<bool> visited(1000001);
vector<int> cc(1000001);
int cur_cc;

void dfs(int u){
    cc[u]=cur_cc;
    visited[u]=1;
    for(auto v:g[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
        vector<pair<int, int>> vp;
	    int n,k,a,b;
        cin>>n>>k;
        string s;
        int i;
        for(i=1; i<=n; i++){
            g[i].clear();
            visited[i]=0;
            cc[i]=0;
        }
        for(i=0; i<k; i++){
            cin>>a>>s>>b;
            if(s == "="){
                g[a].push_back(b);
                g[b].push_back(a);
            }
            else{
                vp.push_back({a, b});
            }
        }

        cur_cc=0;

        for(int i=1; i<=n; i++){
            if(!visited[i]){    
                cur_cc++;
                dfs(i);
            }
        }


        bool flag=1;
        for(auto it:vp){
            a = it.first;
            b = it.second;
            if(cc[a]==cc[b]){
                flag=0;
                break;
            }
        }
        if(!flag)   cout<<"NO"<<en;
        else        cout<<"YES"<<en;

	}
		
		
	return 0;
}
