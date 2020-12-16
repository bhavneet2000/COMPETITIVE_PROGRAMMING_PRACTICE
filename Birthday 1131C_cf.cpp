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
    vector<ll> ar(n);
    vector<ll> v;
	int i;
    for(i=0; i<n; i++)  cin>>ar[i];
    sort(ar.begin(), ar.end());
    // ll m = ar[n-1];
    for(i=0; i<n; i++){
        if(i%2==0)
            cout<<ar[i]<<" ";
        else
            v.push_back(ar[i]);
    }
    for(i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    
		
	return 0;
}
