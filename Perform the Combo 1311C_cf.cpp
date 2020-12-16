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
	    int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int i,j;
        int ar[m];
        vector<int> hash(n);
        for(i=0; i<m; i++){
            cin>>ar[i];
            hash[ar[i]-1]++;
        }
        vector<int> count(26, 0);
        for(i=n-1; i>0; i--){
            hash[i-1]+=hash[i];
        }
        for(i=0; i<n; i++){
            count[s[i]-'a']+=hash[i];
            count[s[i]-'a']++;
        }
        for(auto it:count){
            cout<<it<<" ";
        }
        cout<<en;

	}
		
		
	return 0;
}
