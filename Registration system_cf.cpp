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
    unordered_map<string, int> mp;
	while(t--){
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it!=mp.end()){
            it->second+=1;
            cout<<s<<it->second<<en;
            // s.push_back(it->second);
            // mp[s]=1;
        }
        else{
            cout<<"OK"<<en;
            mp[s]=0;
        }
	}
		
		
	return 0;
}
