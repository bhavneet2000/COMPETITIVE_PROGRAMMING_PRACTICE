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
	    int n,x;
        cin>>n>>x;
        int c=1;
        n-=2;
        while(n>0){
            n-=x;
            c++;
        }
        cout<<c<<en;
	}
		
		
	return 0;
}
