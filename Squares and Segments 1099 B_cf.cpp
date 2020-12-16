#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	ll n;
    cin>>n;
    ll a = sqrt(n);
    ll b = ceil(sqrt(n));
    if(a*b<n)   cout<<a+b+1;
    else        cout<<a+b;
		
	return 0;
}
