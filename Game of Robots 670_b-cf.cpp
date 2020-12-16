#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	ll n,m;
    cin>>n>>m;
    ll a[n+1],pos;
    ll i;
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=1;;i++){
            if(i*(i+1)/2==m)
            {
                pos=i;
                break;
            }
            if(i*(i+1)/2>m)
            {
             pos=m-(i*(i-1)/2);
             break;
            }
        }
        cout<<a[pos]<<endl;
		
	return 0;
}
