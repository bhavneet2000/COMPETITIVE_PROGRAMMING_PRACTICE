#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    string s;
    cin>>n>>s;
	int i;
    if(n&1){
        cout<<"NO";
        return 0;
    }
    int open=0, pre=0;
    for(i=0; i<s.length(); i++){
        if(s[i]=='(')   open++;
        else            open--;
        pre = min(pre, open);
    }
        if(pre>=-1 && open==0)
		    cout<<"YES";
        else    cout<<"NO";
	return 0;
}
