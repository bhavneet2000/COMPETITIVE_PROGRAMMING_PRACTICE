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
        string s,t,p;
	    cin>>s>>t>>p;
        vector<int> cnt(26, 0);
        for(auto x : p)
			++cnt[x - 'a'];

		bool ok = true;
		int is = 0, it = 0;
		while(is < s.size()){
			if(it == t.size()){
				ok = false;
				break;
			}
			
			if(s[is] == t[it]){
				++is, ++it;
				continue;
			}
			
			--cnt[t[it] - 'a'];
			++it;
		}
        while(it < t.size()){
            --cnt[t[it] - 'a'];
			++it;
        }
        
		if(*min_element(cnt.begin(), cnt.end()) < 0)
			ok = false;

		if(ok) cout << "YES\n";
		else cout << "NO\n";

	}
		
		
	return 0;
}
