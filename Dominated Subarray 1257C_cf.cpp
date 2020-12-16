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
        int i;
        int ar[n];
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        int ans = INT_MAX;
        vector<int> count(n + 1, -1);
        for(int i = 0; i < n; i++) {
            if(count[ar[i]] != -1)
                ans = min(ans, i - count[ar[i]] + 1);
            count[ar[i]] = i;
        }
        if(ans > n)
            ans = -1;
        cout << ans << en;
    }
		
		
	return 0;
}
