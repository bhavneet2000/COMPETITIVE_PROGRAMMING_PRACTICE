#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll n,t;
        cin>>n>>t;
        vector<ll> ar(n);
        ll i;
        for(i=0; i<n; i++)  cin>>ar[i];
        ll j=n-1;
        for(i=0; i<n-1; i++){
                if(ar[i]!=-1)
                {auto it = find(ar.begin()+i+1, ar.end(), t-ar[i]);
                *it = -1;
                ar[i]= -2;}
        }
        if(ar[n-1]!=-1 && ar[n-1]!=-2){
            ar[n-1]=-2;
        }
		for(i=0; i<n; i++){
            if(ar[i]==-1)   cout<<0<<" ";
            if(ar[i]==-2)   cout<<1<<" ";

            
        }
        cout<<en;
    }	
	return 0;
}
