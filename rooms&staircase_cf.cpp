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
        string s;
        cin>>s;
        int ans;
        bool flag=0;
        for(int i=1; i<=n; i++){
            if(s[i]=='1'){
                ans = (n-i+1)+max((n-i+1), i);
                flag=1;
                break;
            }
        }
        for(int i=n; i>=1; i--){
            if(s[i]=='1'){
                ans = max(ans, (n-i+1) + max((n-i+1), i));
                flag=1;
                break;
            }
        }

        if(flag==0)    cout<<n<<en;
        else
        {
            cout<<ans<<en;
        }
        
	}
		
		
	return 0;
}
