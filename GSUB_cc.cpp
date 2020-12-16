#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<ll> ar;
ll n;
ll solve(int x, int y){
    ar[x] = y;
    ll length=1,ans=0;
    for(ll i=0; i<n-1; i++){
        if(ar[i]!=ar[i+1])  length++;
        else{
            ans = max(ans, length);
            length=1;
            i--;
        }
    }
    return length;
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        ll q;
	        cin>>n>>q;
	        ll i;
	        for(i=0; i<n; i++){  
	            ll a;
	            cin>>a;
	            ar.push_back(a);
	        }
	        
	        while(q--){
	            ll x,y;
	            cin>>x>>y;
	            cout<<solve(x-1, y)<<en;
	        }
	        
	}
		
		
	return 0;
}
