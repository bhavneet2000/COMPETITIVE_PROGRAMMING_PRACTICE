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
	    int n;
        cin>>n;
        cout<<n<<en;
        for(int i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<en;
	}
		
		
	return 0;
}
