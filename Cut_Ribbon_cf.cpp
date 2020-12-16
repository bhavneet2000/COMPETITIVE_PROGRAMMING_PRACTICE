#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main() {
    fio;
	{
	    int m;
    	cin>>m;
        int val=3;
    	int i, j;
        int ar[3];
        
        for(i=0; i<3; i++)  cin>>ar[i];
	    long long dp[m+1][val+1];
	    for(i=0; i<val+1; i++){
	        dp[0][i] = 0;
	    }
	    for(i=1; i<m+1; i++){
	        dp[i][0]=INT_MAX-1;
	    }
        sort(ar, ar+3);
	    for(i=1; i<val+1; i++){
	        if((i%ar[0])) dp[1][i] = INT_MAX-1;
	        else{
	            dp[1][i] = i/ar[0];
	        }
	    }
        
	    for(i=2; i<m+1; i++){
	        for(j=1; j<val+1; j++){
	            if(j>=ar[i-1]){
	                dp[i][j] = min(dp[i][j-ar[i-1]]+1, dp[i-1][j]);
	            }
	            else{
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
       
        cout<<dp[3][m]<<en;

	}
	return 0;
}