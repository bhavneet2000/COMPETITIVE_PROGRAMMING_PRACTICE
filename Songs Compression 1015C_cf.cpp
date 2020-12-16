#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    ll m;
    cin>>n>>m;
    vector<pair<ll, ll>> ar;
    int i;
    ll a,b;
    ll sum=0;

	for(i=0; i<n; i++){
        cin>>a>>b;
        ar.push_back({a,b});
        sum+=a;
    }
    sort(ar.begin(), ar.end(), [&](pair<ll ,ll> a, pair<ll, ll> b){
        return a.first-a.second > b.first-b.second;
    });
    for(i=0; i<n; i++){
        if(sum<=m){  
            cout<<i;
            return 0;
        }
        sum-=ar[i].first-ar[i].second;
    }
    if(sum<=m)  cout<<n;
    else        cout<<-1;
	return 0;
}
