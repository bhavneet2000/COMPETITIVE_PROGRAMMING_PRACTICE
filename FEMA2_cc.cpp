#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<vector<pair<int, int>>> g;
vector<bool> visited;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    string str;
	    cin>>str;
        g.resize(n);
        visited.resize(n);
	    for(int i=0; i<n; i++){
	        if(str[i]=='M'){
                int s=0;
                for(int j=i+1; j<n; j++){
                    if(str[j]=='I'){
                        g[i].push_back({j, s});
                    }
                    else if(str[j]=='X'){
                        break;
                    }
                    else if(str[j]==':'){
                        s++;
                    }
                }
            }
            else if(str[i]=='I'){
                int s=0;
                for(int j=i+1; j<n; j++){

                    if(str[j]=='M'){
                        g[j].push_back({i, s});
                    }
                    else if(str[j]=='X'){
                        break;
                    }
                    else if(str[j]==':'){
                        s++;
                    }
                }
            }
	    }
        int count=0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                for(auto v:g[i]){
                    int j = v.first;
                    int s = v.second;
                    if(!visited[j]){
                        int p = k+1 - abs(j-i) - s;
                        if(p>0){
                            visited[i]=1;
                            visited[j]=1;
                            count++;
                            break;
                        }
                    }
                }
            }
        }

        cout<<count<<en;
	    
	}
		
		
	return 0;
}
