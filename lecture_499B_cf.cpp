#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,m,i;
    cin>>n>>m;
    map<string, string> mp;
    string s;
    string a,b;
    for(i=0; i<m; i++){
        cin>>a>>b;
        mp.insert({a,b});
    }
    for(i=0; i<n; i++){
        cin>>s;
        auto it = mp.find(s);
        if(it->first.length() <= it->second.length()){
            cout<<it->first<<" ";

        }
        else
        {
            cout<<it->second<<" ";
        }
        
    }
	
    
		
	return 0;
}
