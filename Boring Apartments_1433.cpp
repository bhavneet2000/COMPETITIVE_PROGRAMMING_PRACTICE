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
	    string s;
        cin>>s;
        int n = s[0] - '0';
        int res=10;
        res  = res*(n-1);
        for(int i=1; i<=s.size(); i++)
        {
            res+=i;
        }

        cout<<res<<en;
	}
		
		
	return 0;
}
