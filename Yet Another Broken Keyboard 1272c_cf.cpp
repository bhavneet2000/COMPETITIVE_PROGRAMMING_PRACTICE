#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i;
    unordered_set<char> ar(k);
    char c;
    for(i=0; i<k; i++){  
        cin>>c;
        ar.insert(c);
    }
    int j;
    ll ans=0,len;
    for(i=0; i<n; i++){
        int j=i;
        while(j<n && ar.count(s[j]))    j++;

        len = j-i;
        ans += len*1ll*(len+1)/2;
        i=j;
    }

    cout<<ans;
	return 0;
}
