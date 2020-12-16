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
	    string s,res;
        int n;
        cin>>n>>s;
        for(int i=0; i<s.length(); i+=2){
            res+=s[i];
        }
        cout<<res<<en;
	}
		
		
	return 0;
}
