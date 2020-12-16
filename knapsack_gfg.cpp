#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;
int dp[1002][1002];

int knapsack(vector<int> wt, vector<int> val, int w, int n){
    if(n==0 || w==0)    return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    
    if(w>=wt[n]){
        return dp[n][w] = max(val[n]+knapsack(wt, val, w-wt[n], n-1), knapsack(wt, val, w, n-1));
    }
    else{
        return dp[n][w] = knapsack(wt, val, w, n-1);
    }
}

int main()
{
	fio;
	int t;
	cin>>t;
	    
	while(t--){
	    int n,w;
	    cin>>n>>w;
	    vector<int> val(n+1), wt(n+1);
	    for(int i=1; i<=n; i++)  cin>>val[i];
	    for(int i=1; i<=n; i++)  cin>>wt[i];
	    
        for(int i=0; i<=1002; i++){  
	        for(int j=0; j<=1002; j++)  dp[i][j]=-1;
	    }
	    cout<<knapsack(wt, val, w, n)<<en;
	}
		
		
	return 0;
}
