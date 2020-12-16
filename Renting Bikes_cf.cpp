#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	ll n, m, a;
    cin>>n>>m>>a;
    vector<ll> br(n);
    for(ll i=0; i<n; i++)  cin>>br[i];
    sort(br.begin(), br.end(), greater<ll>());
    vector<ll> pr(m);
    for(ll i=0; i<m; i++)   cin>>pr[i];
    sort(pr.begin(), pr.end());
    ll lo=0, hi = min(n,m)+1;
    ll ans;
    while(lo<hi-1){
        ll mid = (lo+hi)/2;
        ll amt = a;
        ll sum=0;
        for(ll i=0; i<mid; i++){
            amt-=max(pr[mid-i-1]-br[i], 0ll);
            sum+=min(br[i], pr[mid-i-1]);
        }
        if(amt<0){
            hi = mid;
        }
        else{
            lo = mid;
            ans = sum-amt; 
        }
    }
    if(lo==0){
        cout<<"0 0";
        return 0;
    }
    cout<<lo<<" "<<max(0ll,ans);	
	return 0;
}
