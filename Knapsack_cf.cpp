#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<ll, ll> pll;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll w;
        ll n;
        cin>>n>>w;
        vector<pll> wt(n+1);
        for(ll i=1; i<n+1; i++){  
            cin>>wt[i].first;
            wt[i].second = i;
        }

        sort(wt.begin(), wt.end());
        vector<ll> res;
        ll temp = w;
        for(ll i=n; i>=1; i--){
            if(wt[i].first>w){
                continue;
            }
            else{

                w= w - wt[i].first;
                res.push_back(wt[i].second);
            }
            
        }

        if(w>ceil(temp/2))  cout<<-1<<en;
        else{
            cout<<res.size()<<en;
            sort(res.begin(), res.end());
            for(ll i=0; i<res.size(); i++){
                cout<<res[i]<<" ";
            }
            cout<<en;
        }

	}
		
		
	return 0;
}
