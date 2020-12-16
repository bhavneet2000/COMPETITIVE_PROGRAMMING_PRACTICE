#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

void solve(ll n){
    ll i;
    set<int> ar;
    for(i=2; i*i<=n; i++){
        if(n%i==0 && !ar.count(i)){  
            ar.insert(i);
            n/=i;
            break;
        }
    }
    for(i=2; i*i<=n; i++){
        if(n%i==0 && !ar.count(i)){  
            ar.insert(i);
            n/=i;
            break;
        }
    }
    if(ar.size()<2 || n==1 || ar.count(n)) cout<<"NO"<<en;
    else{
        cout<<"YES"<<en;
        for(auto it: ar)  cout<<it<<" ";
        cout<<n<<en;
    }
}


int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        ll n;
            cin>>n;
            solve(n);
	}
		
		
	return 0;
}
