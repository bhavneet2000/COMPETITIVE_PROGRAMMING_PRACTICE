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
	    ll x,y,k;
        cin>>x>>y>>k;
        ll i;
        ll sticks=1,coal=0;
        ll c=0;
        while(true){
            if(sticks<=k){
                sticks--;
                sticks+=x;
                c++;
            }
            if(coal<=k){
                sticks-=y;
                coal++;
                c++;
            }
            if(sticks>=k && coal>=k)    break;

        }

        cout<<c<<en;
	}
	return 0;
}
