#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;
vector<ll> dp;
// ll fact(int n){
//     if(n==0)    return 1;
//     if(dp[n]!=-1)   return dp[n];
//     return  dp[n] = n*fact(n-1);
// }

int main()
{
	fio;
	int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> sp;

    for(int i=0; i<n; i++){
        int temp = s[i]-'0';
        if(temp==2 || temp==3 || temp==5 || temp==7)    sp.push_back(temp);
        
        else if(temp==4){
            sp.push_back(2);sp.push_back(2);sp.push_back(3);
        }     
        else if(temp==6){
            sp.push_back(3);sp.push_back(5);
        }
        else if(temp==8){
            sp.push_back(2);sp.push_back(2);sp.push_back(2);sp.push_back(7);
        }
        else if(temp==9)
        {
            sp.push_back(7);sp.push_back(3);sp.push_back(3);sp.push_back(2);
        }
        
    }

    sort(sp.begin(), sp.end());

    for(int i=sp.size()-1; i>=0; i--){
        cout<<sp[i];
    }

    
		
	return 0;
}
