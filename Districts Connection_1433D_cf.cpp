#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	ll t;
	cin>>t;
	while(t--){
        ll n;
        cin>>n;
        ll i;
        vector<ll> ar(n+1);
        vector<pair<int, int>> g;
        vector<bool> visited(n+1);

        for(i=1; i<=n; i++){
            cin>>ar[i];
        }
        for(i=1; i<=n; i++){
                for(int j=i+1; j<=n; j++){
                    if(ar[i]!=ar[j] && !visited[j]){
                        visited[i]=1;
                        visited[j]=1;
                        g.push_back({i,j});
                        
                    }
                }
        }
        if(g.size()!=n-1){
            cout<<"NO"<<en;
        }
        else{
            cout<<"YES"<<en;
            for(auto it:g){
                cout<<it.first<<" "<<it.second<<en;
            }
        }

	}
		
		
	return 0;
}
