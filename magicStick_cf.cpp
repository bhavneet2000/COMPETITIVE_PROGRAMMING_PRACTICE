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
	    ll x,y;
        cin>>x>>y;
        if(x>3)                                 cout<<"YES"<<en;
        else if(x==1){
            if(y==1)    cout<<"YES"<<en;
            else
            {
                cout<<"NO"<<en;
            }
            
        }
        
        else if(y<=3)
        {
            cout<<"YES"<<en;
        }
        else{
            cout<<"NO"<<en;
        }
        
	}

	return 0;
}
