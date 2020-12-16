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
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        ll c=0;
        for(i=n-1; i>=1; i--){
            if(ar[i]<ar[i-1])   c+=(ar[i-1] - ar[i]);
        }
        cout<<c<<en;
	}
		
		
	return 0;
}
