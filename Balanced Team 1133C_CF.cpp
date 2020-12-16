#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    vector<ll> ar(n);
    int i;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar.begin(), ar.end());
    ll val, c=1, ans=0, j=0;
	for(i=0; i<n; i++){
        while (j < n && ar[j] - ar[i] <= 5) {
			++j;
			ans = max(ans, j - i);
		}

        
    }
	cout<<ans;
	return 0;
}
