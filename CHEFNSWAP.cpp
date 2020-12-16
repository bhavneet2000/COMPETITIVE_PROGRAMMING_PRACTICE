#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;


bool calcSum(ll ar[], ll n, ll s1){
    ll s2 = 0;
    ll i,j=n;
    
    
    
   
    while(j>0){
        if(s1==s2)  return 1;
        else{
            s1-=ar[j];
            s2+=ar[j];
            j--;
        }
    }
    
    return 0;
}



int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        ll n;
            cin>>n;
            ll sum = n*(n+1)/2;
	        
	        if(sum&1)   cout<<0<<en;
	        else{
	            ll ar[n+1];
	            ll i;
	            for(i=1; i<=n; i++){
	                ar[i]=i;
	            }
	            
                ll c=0;

	            for(i=1; i<=n; i++){
	                for(ll j=i+1; j<=n; j++){
	                    
	                    swap(ar[i], ar[j]);
	                    
	                    if(calcSum(ar, n, sum))   c++;
	                    
	                    
	                    swap(ar[i], ar[j]);
	                }
	            }
	            
	            cout<<c<<en;
	        }

	}
		
		
	return 0;
}
