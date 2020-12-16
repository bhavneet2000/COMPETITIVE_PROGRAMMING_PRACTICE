#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n, c0, c1, h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int zero=0, one=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0')   zero++;
            else            one++;
        }
        int ans = c0*zero + c1*one;
        ans = min(ans, zero*h + c1*n);
        ans = min(ans, one*h + c0*n);
        cout<<ans<<en;
	}
		
		
	return 0;
}
