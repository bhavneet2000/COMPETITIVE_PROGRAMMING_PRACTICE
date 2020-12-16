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
    int ar[n+1][n+1];
    int m=0,i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<k; j++){
            ar[i][j]=i+m;
            m++;
        }
        if(m>0) m--;
    }
    if(k>1)
    m=ar[n][k-1];
    for(i=1; i<=n; i++){
        for(j=k; j<=n; j++){
            ar[i][j]=i+m;
            m++;
        }
        if(m>0) m--;
    }
    int sum=0;
    for(i=1; i<=n; i++){
        sum+=ar[i][k];
    }
    cout<<sum<<en;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<en;
    }
		
		
	return 0;
}
