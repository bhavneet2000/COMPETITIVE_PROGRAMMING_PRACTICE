#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    int i;
    ll ar[n];
    ll m=-1;
    for(i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i]>m+1) {  
            cout<<i+1;
            return 0;    
        }
        m=max(m, ar[i]);
    }
    cout<<-1;

		
	return 0;
}
