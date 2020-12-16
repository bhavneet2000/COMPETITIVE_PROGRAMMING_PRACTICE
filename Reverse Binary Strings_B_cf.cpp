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
        int c1=0, c2=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1' && s[i+1]=='1')    c1++;
            else if(s[i]=='0' && s[i+1]=='0')   c2++;
        }
        cout<<max(c1,c2)<<en;
	}
		
		
	return 0;
}
