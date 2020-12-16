#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	
	    ll n;
        cin>>n;
        ll c=0;
        while(n>0){
            c+=n;
            if(n%2) break;
            n/=2;
            
        }

        cout<<c;
		
		
	return 0;
}
