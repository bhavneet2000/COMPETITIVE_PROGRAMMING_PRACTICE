#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    unordered_set<int> ar(n);
    int i,a;
    for(i=0; i<n; i++){
        cin>>a;
        if(a<=n)
            ar.insert(a);
    }
    cout<<n-ar.size();
    
		
		
	return 0;
}
