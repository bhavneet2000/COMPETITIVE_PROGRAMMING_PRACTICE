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
        vector<int> ar(n);
        int i;
        for(i=0; i<n; i++){
            cin>>ar[i];
        }
        if(ar[0]<ar[n-1]) cout<<"YES"<<en;
        else            cout<<"NO"<<en;

	}
		
		
	return 0;
}
