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
        int i,j;
        vector<int> ar(n+1);
        for(i=1; i<=n; i++){
            cin>>ar[i];
        
        }

        sort(ar.begin(), ar.end(), greater<int>());

        for(i=0; i<n; i+=1){
            cout<<ar[i]<<" ";

        }
        cout<<en;

    }
		
		
	return 0;
}
