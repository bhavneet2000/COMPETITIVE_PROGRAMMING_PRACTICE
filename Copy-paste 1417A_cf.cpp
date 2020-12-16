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
	    int n,k;
        cin>>n>>k;
        int i;
        vector<int> ar(n);
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        sort(ar.begin(), ar.end());
        i=0;
        int j;
        ll c=0;
        for(j=n-1; j>=1; j--){
            while(ar[j]+ar[0]<=k){
                c++;
                ar[j]+=ar[0];
            }
        }
        cout<<c<<en;
	}
		
		
	return 0;
}
