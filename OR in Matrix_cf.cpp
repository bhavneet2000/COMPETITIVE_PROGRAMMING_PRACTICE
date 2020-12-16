#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	    int n, m;
        cin>>m>>n;
        bool ar[m][n];
        bool br[m][n];
        
        memset(br, 1, sizeof(br));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>ar[i][j];
                if(ar[i][j]==0){
                    for(int k=0; k<n; k++)  br[i][k]=0;
                    for(int k=0; k<m; k++)  br[k][j]=0; 
                }
            }
        }

        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                bool t=0;
                for(int k=0; k<m; k++)  t|=br[k][j];
                for(int k=0; k<n; k++)  t|=br[i][k];
                if(t!=ar[i][j]){
                    cout<<"NO";
                    return 0;
                }
            }
            
        }

        cout<<"YES"<<en;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<br[i][j]<<" ";
            }
            cout<<en;
        }

        
		
		
	return 0;
}
