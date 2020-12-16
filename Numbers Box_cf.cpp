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
	while(t--){
	    int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; i++){
                cin>>ar[i][j];
            }
        }
        int j=0;
        for(int i=1; i<n-1; i++){
            if(ar[i-1][j]<0 && ar[i+1][j]<0){
                abs(ar[i-1][j]);
                abs(ar[i][j-1]);
            }
            else if(ar[])
        }



	}
		
		
	return 0;
}
