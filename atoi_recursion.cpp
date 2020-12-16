#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int atoi_rec(string s, int n){
    if(n==1){
        return s[n] - '0';
    }
    
    return ( 10* atoi_rec(s, n-1) + s[n-1] - '0');
}


int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        string s;
            cin>>s;
             
            cout<<atoi_rec(s, s.length());
	}
		
		
	return 0;
}
