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
        vector<ll> b(n);
        for(int i=0; i<n; i++)  cin>>b[i];
        bool flag=0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)  mp[b[i]]++;
        for(auto it:mp){
            if(it.second>1){ 
                cout<<"YES"<<en;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<en;
    }
		
		
	return 0;
}
