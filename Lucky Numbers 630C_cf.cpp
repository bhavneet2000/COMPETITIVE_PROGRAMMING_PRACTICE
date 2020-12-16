#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    int i;
    ll ans=0;
    for(i=1; i<=n; i++){
        ans+=pow(2,i);
    }
    cout<<ans;
		
		
	return 0;
}
