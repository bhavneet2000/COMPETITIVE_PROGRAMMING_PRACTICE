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
	unordered_set<ll> s;
    vector<ll> ar;
    ll a;
    int i,j;
    for(i=0; i<n; i++){
        cin>>a;
        ar.push_back(a);
    }
    sort(ar.begin(), ar.end());
    for(i=0; i<n; i++){
        if(ar[i]+ar[i+1]>ar[i+2] && ar[i+1]+ar[i+2]>ar[i] && ar[i]+ar[i+2]>ar[i+1]){
            cout<<"YES";
            return 0;
        }
    }
		cout<<"NO";
	return 0;
}
