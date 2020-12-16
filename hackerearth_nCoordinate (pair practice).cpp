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
	ll a,b;
	set<pair<ll, ll>> x;
	multiset<pair<ll, ll>> s;

    int i;
	for(i=0; i<n; i++){
		cin>>a>>b;
		s.insert({a,b});
	}
	for(auto it:s){
		x.insert({it.first, it.second});
	}

	for(auto it:x){
		cout<<it.first<<" "<<it.second<<" "<<s.count({it.first, it.second})<<en;
		
	}
		
		
	return 0;
}
