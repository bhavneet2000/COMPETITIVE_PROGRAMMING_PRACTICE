#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int x, y;
        cin>>x>>y;
        int dif = abs(x-y);
        if(dif>0){
            cout<<x+y+dif-1<<en;
        }
        else{
            cout<<x+y<<en;
        }
	}
		
		
	return 0;
}
