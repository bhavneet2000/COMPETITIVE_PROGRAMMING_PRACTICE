#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
// vector<vector<int>> g;
// vector<bool> visited;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
        cin>>n>>k;
        vector<ll> ar(n);
        ll i;
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        // ll MAX = *max_element(ar.begin(), ar.end());
        ll c=0;
        bool temp=1;
        for(i=0; i<n; i++){
            if(ar[i]<k){
                cout<<i+1<<en;
                temp=0;
                break;
            }
            else if(i<n-1 && ar[i]>k){
                ar[i]-=k;
                ar[i+1]+=ar[i];
            }
        }
        if(temp){
            i=n-1;
            c=n;
            c+=ar[i]/k;
            cout<<c<<en;
        }
	}
		
		
	return 0;
}
