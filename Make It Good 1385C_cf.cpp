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
	    int n,i;
        cin>>n;
        vector<int> ar(n);
        
        for(i=0; i<n; i++)  cin>>ar[i];

        i=n-1;
        while(i>0 && ar[i]<=ar[i-1]) i--;
        while(i>0 && ar[i]>=ar[i-1]) i--;

        
        cout<<i<<en;
    }	
		
	return 0;
}
