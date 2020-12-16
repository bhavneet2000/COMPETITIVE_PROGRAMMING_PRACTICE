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
	    ll n,k;
        cin>>n>>k;
        ll ans = (k-1)/(n-1);
        cout<<k+ans<<en;
	}
		
		
	return 0;
}
