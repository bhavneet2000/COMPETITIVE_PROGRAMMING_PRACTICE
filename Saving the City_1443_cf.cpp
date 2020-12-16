#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<vector<int>> g;
vector<bool> visited;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int i=0;
        int n=s.length();
        while(i<n && s[i]=='0'){
            i++;
        }
        int ans=0, zero=0;
        bool t=0;
        for(;i<n; i++){
            bool flag=0;
            int j=i;
            zero=0;
            while(j<n && s[j]=='1'){
                j++;
                if(!flag && !t){
                    ans+=a;
                    flag=1;
                }
            }
            bool temp=0;
            while(j<n && s[j]=='0'){
                zero++;
                j++;
                temp=1;
            }
            t=0;
            if(j<n){
                if((zero*b)<a){
                    ans+=zero*b;
                    t=1;
                }
            }
            i=j-1;
        }
        cout<<ans<<en;
	}
		
		
	return 0;
}
