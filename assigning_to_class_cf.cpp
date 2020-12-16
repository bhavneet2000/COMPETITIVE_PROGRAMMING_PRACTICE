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
        ll ar[2*n];
        for(int i=0; i<2*n; i++)  cin>>ar[i];
        sort(ar, ar+2*n);
        cout<<ar[n]-ar[n-1]<<en;

	}
		
		
	return 0;
}
