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
        ll n;
        cin>>n;
        int m=n%14;
        if(m>0 && m<7 && n>14){
            cout<<"YES"<<en;
        }
        else{
            cout<<"NO"<<en;
        }

	}
		
		
	return 0;
}
