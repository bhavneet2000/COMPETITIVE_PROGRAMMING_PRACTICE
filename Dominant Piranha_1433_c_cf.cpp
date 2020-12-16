#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll n;
        cin>>n;
        vector<ll> ar(n);
        ll i;
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        vector<pair<ll, ll>> res;
        if(ar[0]>ar[1]) res.push_back({ar[0], 1});
        for(i=1; i<n-1; i++){
            if(ar[i]>ar[i-1] || ar[i]>ar[i+1]){
                res.push_back({ar[i], i+1});
            }
        }
        if(ar[n-1]>ar[n-2]){
                res.push_back({ar[n-1], n});
        }


        if(res.size()==0){
            cout<<-1<<en;
            continue;
        }
        pair<ll, ll> pr = {0,0};
        for(auto it:res){
            if(it.first > pr.first){
                pr = it;
            }
        }
        cout<<pr.second<<en;
	}
		
		
	return 0;
}
