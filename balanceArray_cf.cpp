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
	        int n;
            cin>>n;
            int i;
            vector<int> ar;

            if(n%4){
                cout<<"NO"<<en;
                continue;
            }

            int j=2;
            for(i=0; i<n/2; i++){
                ar.push_back(j);
                j+=2;
            }
            j=1;
            for(i=n/2; i<n; i++){
                ar.push_back(j);
                j+=2;
            }
            ar[n-1]+=n/2;
            cout<<"YES"<<en;

            for(i=0; i<n; i++){
                cout<<ar[i]<<" ";
            }
            cout<<en;
	}
		
		
	return 0;
}
