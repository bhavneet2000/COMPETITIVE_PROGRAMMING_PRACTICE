#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,i;
    cin>>n;
    ll ar[n];
    for(i=0; i<n; i++)  cin>>ar[i];
    ll sum=ar[n-1], m = ar[n-1];
    for(i=n-2; i>=0; i--){
        
        if(m==0){
            break;
        }
        
        m = min(m-1, ar[i]);
        sum+=m;
        
        
    }
	
    cout<<sum;
		
	return 0;
}
