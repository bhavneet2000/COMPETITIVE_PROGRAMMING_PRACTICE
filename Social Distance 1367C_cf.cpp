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
	    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0, j;
        int ans=0;
        for(i=0; i<n; i++){
            if(s[i]=='1'){
                i+=k;
            }
            else{
                bool f=1;
                for(j=1; j<=k && i+j<n; j++){
                    if(s[i+j]=='1'){
                        f=0;
                        break;
                    }
                }
                if(f==0){
                    i=i+j+k;
                }
                else{
                    s[i]='1';
                    ans++;
                    i=i+k;
                }
            }

        }

        cout<<ans<<en;
        
	}
		
		
	return 0;
}
