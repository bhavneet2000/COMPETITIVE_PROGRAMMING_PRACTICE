#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	ll n, q;
    cin>>n>>q;
    ll br[n];
    // memset(br, 0, sizeof(br));
    for(ll i=0; i<n; i++)  cin>>br[i];
	for(ll i=1; i<n; i++){
        br[i]+=br[i-1];
    }
    // for(int i=0; i<n; i++){
    //     cout<<br[i]<<" ";
    // }
    ll arrow=0;
    while(q--){
        ll k;
        cin>>k;
        arrow+=k;
        ll it = lower_bound(br, br+n, arrow)-br;
        if(it>=n){
            cout<<n<<en;
            arrow=0;
        }
        else{
            if(br[it]>arrow)
                it--;
            if(it==n-1){
                cout<<n<<en;
                arrow=0;
            }
            else
                cout<<n-it-1<<en;
        }
    }
	
    return 0;
}
