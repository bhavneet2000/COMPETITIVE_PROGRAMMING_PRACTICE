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
	    int n,l,k;
        cin>>n>>k>>l;
        if(k*l<n){
            cout<<-1<<en;
            continue;
        }
        int i,j;
        vector<int> ar;
            for(j=1; i<=n; j++){
                ar.push_back(j);
                i++;
                if(j>=k){
                    j=1;
                }
            }

        for(i=0; i<n; i++){
            cout<<ar[i]<<" ";
        }
        cout<<en;

	}
		
		
	return 0;
}
