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
	    int n;
        cin>>n;
        ll x;
        cin>>x;
        vector<ll> ar(n);
        int i;
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        int c=0;
        i=n-1;
        sort(ar.begin(), ar.end());
        // while(i>=0 && ar[i]>=x){
        //     c++;
        //     i--;
        // }
        int j;
        int temp=1;
        ll ans=0;
        for(;i>=0; i--){
            j=i-1;
            ans=ar[i];
            temp=1;
            while(j>=0 && ans*temp<x){
                ans=ar[j];
                temp++;
                j--;
            }
            if(ans*temp>=x){
                c++;
            }
            
            i=j+1;
        }
        cout<<c<<en;
	}
		
		
	return 0;
}
