#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,x,y,c=0;
    cin>>n>>x>>y;
    vector<int> ar(n);
	int i;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    if(x>y) cout<<n;
    else{
        for(i=0; i<n; i++){
            if(x>=ar[i])    c++;
        }
        cout<<(c+1)/2;
    }

		
	return 0;
}
