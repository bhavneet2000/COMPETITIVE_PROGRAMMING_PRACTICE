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
	    int n, k;
        cin>>n>>k;
        vector<int> ar(n+1);
        for(int i=1; i<n+1; i++){
            cin>>ar[i];
        }
        int i=1, j=n;
        unordered_map<int, int> mp0;
        vector<pair<int, int>> vp;
        while(i<j){
            mp0[(ar[i]+ar[j])]++;
            vp.push_back({min(ar[i], ar[j])+1, max(ar[i], ar[j])+k});
            i++;
            j--;
        }
        vector<int> pre(2*k+10);
        for(auto it:vp){
            int l=it.first;
            int r=it.second;
            pre[l]+=1;
            pre[r+1]-=1;
        }
        int sum=0;
        for(int i=0; i<2*k+10; i++){
            sum+=pre[i];
            pre[i]=sum;
        }


        int ans = INT_MAX;
        for(int i=2; i<=2*k; i++){
            int c0 = mp0[i];
            int c1 = pre[i] - c0;
            int c2 = n/2 - c1 - c0;
            ans = min(ans, c1+c2*2);
        }

        cout<<ans<<en;


	}
		
		
	return 0;
}
