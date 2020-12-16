#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;
int dp[1001][1001];
string x, y;
string print_lcs(int n, int m){
    int i, j;
    for(i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(x[i-1] == y[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    i=n, j=m;
    string s;
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])   i--;
            else                        j--;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
	fio;
    memset(dp, 0, sizeof(dp));
    int n, m;
    cin>>n>>m;
    cin>>x>>y;
    cout<<print_lcs(n, m);
	
		
		
	return 0;
}
