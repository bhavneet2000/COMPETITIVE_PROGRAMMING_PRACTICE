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
    int x=0,y=0;
    for(i=0; i<n; i++){
        if(s[i]=='L')   x--;
        else if(s[i]=='U')  y++;
        else if(s[i]=='R')  x++;
        else                y--;
    }
    cout<<n-abs(x)-abs(y);
		
		
	return 0;
}
