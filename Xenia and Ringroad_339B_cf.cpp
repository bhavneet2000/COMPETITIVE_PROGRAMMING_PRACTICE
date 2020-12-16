#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	ll m,n;
    cin>>n>>m;
    ll i;
    vector<ll> ar(m+1);
    for(i=1; i<=m; i++){
        cin>>ar[i];
    }
    ll temp = ar[1], c = ar[1]-1;
    for(i=2; i<=m; i++){
        if(ar[i]<temp){
            c+=n-temp + ar[i];
            temp = ar[i];
        }
        else{
            c+=ar[i]-temp;
            temp = ar[i];
        }
    }
	cout<<c;
	return 0;
}
