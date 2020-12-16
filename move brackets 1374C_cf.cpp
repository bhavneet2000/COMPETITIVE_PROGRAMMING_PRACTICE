#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int brack(string s, int n){
int c=0;
int open=0,close=0;
for(int i=0; i<n; i++){
    if(s[i]=='(')   open++;
    else            close++;
    if(close>open){
        c++;
        close--;
    }
}
return c;
}

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
        cout<<brack(s,n)<<en;
	}
		
		
	return 0;
}
