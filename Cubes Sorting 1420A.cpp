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
        vector<ll> ar(n);
        bool temp=1;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            if(i>0 && ar[i-1]<=ar[i]){
                temp=0;
            }
        }
        if(temp)    cout<<"NO"<<en;
        else        cout<<"YES"<<en;
        
    }	
		
	return 0;
}
