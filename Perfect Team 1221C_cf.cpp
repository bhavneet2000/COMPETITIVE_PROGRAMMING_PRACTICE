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
	    
        ll c, m, x;
		cin>>c>>m>>x;
		ll l = 0, r = min(c, m);
		ll ans = 0;
		while (l <= r){
			ll mid = r + (l - r) / 2;
			if (c + m + x - 2 * mid >= mid){
				l = mid + 1;
				ans = mid;
			}
			else{
				r = mid - 1;
			}
		}
        
        cout<<ans<<en;

	}
		
		
	return 0;
}
