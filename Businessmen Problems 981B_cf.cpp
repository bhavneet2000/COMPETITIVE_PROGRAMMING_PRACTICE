#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,m;
    cin>>n;
    int i;
    map<ll,ll> m1;
    map<ll, ll> m2;
    ll a,b;

    for(i=0; i<n; i++){
        cin>>a>>b;
        m1.insert({a,b});
    }
    cin>>m;

    for(i=0; i<m; i++){
        cin>>a>>b;
        m2.insert({a,b});
    }
	ll sum=0;
	for(auto it:m1){
        sum+=it.second;
    }
    for(auto it:m2){
        sum+=it.second;
    }
    for(auto it:m1){
        auto x = m2.find(it.first);
        if(x!=m2.end()){
            sum-=min(it.second, x->second);
        }
    }

    cout<<sum;

	return 0;
}
