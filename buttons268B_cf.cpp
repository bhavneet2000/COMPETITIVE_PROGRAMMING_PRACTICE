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
	ll res = 0;
	for(int i=1; i<=n; i++){
        res+=i*(n-i);
    }	
	    cout<<res+n;
	return 0;
}
