#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	int n;
    cin>>n;
    vector<int> ar(n);
    vector<int> prefix(n+1);
    for(int i=0; i<n; i++){
        cin>>ar[i];
        prefix[i+1] = prefix[i]+ar[i];
    }
    int q;
    cin>>q;
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<prefix[j+1] - prefix[i]<<en;
    }

		
		
	return 0;
}
