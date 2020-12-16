#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
ll n,x,p,k;
vector<ll> ar;
ll findX(){
    ll i;
    ll min = 1e10;
    ll ans = 0;
    auto it1 = lower_bound(ar.begin(), ar.end(), x)-ar.begin();
    auto it2 = upper_bound(ar.begin(), ar.end(), x) - ar.begin();
    for(i=it1; i<it2; i++){
        if(abs(p-i)<min){
            min=abs(p-i);
            ans=i;
        }
    }
    return mint;
}
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    ll i;
        cin>>n>>x>>p>>k;
        
        ar.resize(n);
        
        for(i=0; i<n; i++){
            cin>>ar[i];
        }

        sort(ar.begin(), ar.end());
        int c = 0;

        if((ar[p-1]>x && p>k) || (ar[p-1]<x && p<k)){   
            cout<<-1<<en;
            continue;    
        }

        if(ar[findX()]!=x){
            ar[k-1] = x;
            c++;
        }
        sort(ar.begin(), ar.end());
        if(ar[p-1]==x){
            cout<<1<<en;
        }
        else{
            ll temp = findX() + 1;
            if(p>temp){
                cout<<(p-temp) + c<<en;
            }
            else{
                cout<<(temp - p) + c<<en;
            }
        }
    
    }
		
		
	return 0;
}
