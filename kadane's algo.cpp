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
	    int n;
        cin>>n;
        vector<ll> ar(n);
        int i;
        ll sum = 0, ans = INT_MIN;
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        for(i=0; i<n; i++){
            sum+=ar[i];
            ans=max(ans, sum);
            if(sum<0) sum=0;            
        }
        cout<<ans<<en;
	}
		
		
	return 0;
}
