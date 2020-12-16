#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    ll w,h;
    vector<pair<ll, ll>> ar;
    int i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>w>>h;
        ar.push_back({min(w,h), max(w, h)});
    }
    bool val=0;
    for(i=0; i<n-1; i++){
        if(ar[i].second >= ar[i+1].second){
            val=1;
        }
        else if(ar[i].second >= ar[i+1].first){
            swap(ar[i+1].first, ar[i+1].second);
            val=1;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
		
		
	return 0;
}
