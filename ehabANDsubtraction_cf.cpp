#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,t;
	cin>>n>>t;

    int i;
    ll a;
    set<ll> s;
    s.insert(0);
    for(i=0; i<n; i++){
        cin>>a;
        if(a)
            s.insert(a);
    }
    
    auto it=s.begin();

	while(t--){
	    if(next(it)==s.end()) cout<<0<<en;
        else{
            printf("%d\n",*next(it)-*it);
            it=next(it);
        }
	}
		
		
	return 0;
}
