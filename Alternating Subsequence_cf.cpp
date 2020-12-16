#include <bits/stdc++.h>
#define ll long long 
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
bool sign(ll x){
    if(x>0) return 1;
    else    return 0;
}
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
        for(i=0; i<n; i++)  cin>>ar[i];
        ll sum=0;
        bool temp=0;
        ll cur;
        ll j1,j2;
        
        for(i=0; i<n; i++){
            cur=ar[i];
            int j=i;
            while(j<n && sign(ar[i])==sign(ar[j])){
                cur = max(cur, ar[j]);
                j++;
            }
            sum+=cur;
            i=j-1;
        }
        
        cout<<sum<<en;
	}
		
		
	return 0;
}
