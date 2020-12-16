#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	ll n;
    cin>>n;
    ll s;
    cin>>s;

    vector<ll> ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    ll cost=0;
    ll lo = 0, hi = n+1;
    while(lo<hi-1){
        ll k = (lo+hi)/2;
        vector<ll> br(n);
        for(ll i=0; i<n; i++){
            br[i] = ar[i] + k*(i+1);
        }
        sort(br.begin(), br.end());
        ll i=0;
        ll sum=0;
        
        for(ll i=0; i<k ; i++){
            sum+=br[i];
        }

        if(sum<=s){
            lo = k;
            cost = sum;
        }
        else{
            hi = k;
        }


    } 
    cout<<lo<<" "<<cost<<en;
		
		
	return 0;
}
