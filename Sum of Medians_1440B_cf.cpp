#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<vector<int>> g;
vector<bool> visited;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll n, k;
        cin>>n>>k;
        vector<ll> ar(n*k+1);
        for(int i=1; i<n*k+1; i++){
            cin>>ar[i];
        }
        ll sum=0;
        int i = n*k - n/2;
        int temp=0;
        for(; i>=0 && temp<k; i-=(n/2+1)){
            // cout<<ar[i]<<" ";
            sum+=ar[i];
            temp++;
        }
        

        
        cout<<sum<<en;
	}
		
		
	return 0;
}
