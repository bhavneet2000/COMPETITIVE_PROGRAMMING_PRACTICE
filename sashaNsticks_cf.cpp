#include <bits/stdc++.h>
#define ll unsigned long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

string solve(ll n, ll k){
    ll temp = n/k;
    
    
    return (temp&1) ? "YES" : "NO";
}


int main()
{
	fio;
	
	
	        ll n,k;
            cin>>n>>k;
            cout<<solve(n,k)<<en;

		
		
	return 0;
}
