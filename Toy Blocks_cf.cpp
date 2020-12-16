#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;


int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        vector<ll> ar(n);
        for(int i=0; i<n; i++)  cin>>ar[i];
        ll sum=0;
        ll ans = INT_MAX;
        sort(ar.begin(), ar.end());
        
        vector<int> dp(n);
        for(int i=1; i<n; i++){
            sum+=ar[i];
        }
        for(int i=0; i<n; i++){
            sum-=ar[i];
            
        }


        cout<<ans<<en;
	}
		
		
	return 0;
}
