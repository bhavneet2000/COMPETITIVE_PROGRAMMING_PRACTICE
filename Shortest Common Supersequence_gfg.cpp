#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

string x, y;
int dp[101][101];
int super_seq(int n, int m){
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return m+n-dp[n][m];
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    cin>>x>>y;
        cout<<super_seq(x.length(), y.length())<<en;
	}
		
		
	return 0;
}
