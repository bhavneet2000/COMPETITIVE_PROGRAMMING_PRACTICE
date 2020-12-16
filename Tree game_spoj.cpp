#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int main()
{
	fio;
	int n;
    cin>>n;
    int i;
    g.resize(n+1);
    for(i=1; i<n; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
		int ans = n, j = n-1;
        for(i=1; i<n; i++){
            ans = max(i*j, ans);
            j--;
        }
        cout<<ans;
		
	return 0;
}
