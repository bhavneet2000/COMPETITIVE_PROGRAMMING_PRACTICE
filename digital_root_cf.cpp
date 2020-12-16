#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

ll digit_root(ll n){
    
    return 9*(n-1);
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        int x;
            ll k;
            cin>>k>>x;
            ll i;
            cout<<digit_root(k)+x<<en;
            
	}
		
		
	return 0;
}
