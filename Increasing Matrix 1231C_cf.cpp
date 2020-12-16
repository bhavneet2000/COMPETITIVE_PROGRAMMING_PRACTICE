#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,m;
    cin>>n>>m;
    int ar[n][m];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>ar[i][j];
        }
    }
    int sum=0;
    for(i=n-1; i>=0; i--){
        for(j=m-1; j>=0; j--){
            if(ar[i][j]==0){
                int x = ar[i][j+1]-1;
                int y = ar[i+1][j]-1;
                ar[i][j]=min(x,y);
            }
            if(i<(n-1) && ar[i][j]>=ar[i+1][j]){
                cout<<-1;
                return 0;
            }
            if(j<m-1 && ar[i][j]>=ar[i][j+1]){
                cout<<-1;
                return 0;
            }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum+=ar[i][j];
        }
    }
		cout<<sum;
		
	return 0;
}
