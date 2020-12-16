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
        int i;
        int odd=INT_MAX,eve=INT_MAX;
        for(i=0; i<n; i+=2){
            if(odd>s[i]-'0')    odd=s[i]-'0';
            if(i<n-1 && eve>s[i+1]-'0')  eve=s[i]-'0';
        }
        if(n%2==0){
            if(eve&1)   cout<<1<<en;
            else        cout<<2<<en;
        }
        else{
            if(odd&1)   cout<<1<<en;
            else        cout<<2<<en;
        }
	}
		
		
	return 0;
}
