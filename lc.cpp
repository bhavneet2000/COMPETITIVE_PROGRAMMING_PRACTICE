#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<vector<int>> g;
vector<bool> visited;


    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)    return n;

        vector<int> dp(n+1);
        map<int, int> mp;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i], dp[j]+1);
                    mp[dp[i]]++;
                }
            }
        }
        
        auto it = mp.rbegin();
        
        return it->second;
        
    }

    bool bool_cmp(string s1, string s2){
        return (s1.length()<s2.length());
    }
    
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        if(n<=1)    return n;
        vector<int> dp(n, 1);
        sort(words.begin(), words.end(), bool_cmp);
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(words[i].size()==words[j].size()+1){
                    map<char, int> count;
                    for(int k=0; k<words[i].size(); k++){
                        count[words[i][k]]++;
                    }
                    for(int k=0; k<words[j].size(); k++){
                        count[words[j][k]]--;
                    }
                    int c=0;
                    for(auto it:count){
                        if(it.second!=0) c++;
                        if(c>1) break;
                    }
                    if(c==1){
                        dp[i] = max(dp[i], dp[j]+1);
                    }
                }
            }
        }
        
        return *max_element(dp.begin(), dp.end());
    }


int main()
{
	fio;
	int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)  cin>>ar[i];
	
    cout<<findNumberOfLIS(ar);
		
	return 0;
}

int minDis(string s1, string s2, int n, int m, vector<vector<int>> &dp){
        if(n==0)    return m;
        if(m==0)    return n;
        
        if(dp[n][m]!=-1)    return dp[n][m];
        
        
        if(s1[n-1]==s2[m-1]){
            if(dp[n-1][m-1]==-1){
                return dp[n][m] = minDis(s1, s2, n-1, m-1, dp);
            }
            else{
                return dp[n][m] = dp[n-1][m-1];
            }
        }
        
        else{
            int m1, m2, m3;
            if(dp[n-1][m]!=-1){
                m1 = dp[n-1][m];
            }
            else{
                m1 = minDis(s1, s2, n-1, m, dp);
            }
            
            if(dp[n][m-1]!=-1){
                m2 = dp[n][m-1];
            }
            else{
                m2 = minDis(s1, s2, n, m-1, dp);
            }
            
            
            if(dp[n-1][m-1]!=-1){
                m3 = dp[n-1][m-1];
            }
            else{
                m3 = minDis(s1, s2, n-1, m-1, dp);
            }
            return dp[n][m] = 1+min(m1, min(m2, m3));
        }
        
        
        
}