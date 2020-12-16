#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int m,n;
    char c;
    cin>>m>>n>>c;
    char ar[m][n];
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin>>ar[i][j];
        }
    }
    unordered_set<char> s;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(ar[i][j]==c){
                if(i>0 && ar[i-1][j]!=c && ar[i-1][j]!='.')    s.insert(ar[i-1][j]);
                if(i<m-1 && ar[i+1][j]!=c && ar[i+1][j]!='.')    s.insert(ar[i+1][j]);
                if(j<n-1 && ar[i][j+1]!=c && ar[i][j+1]!='.')    s.insert(ar[i][j+1]);
                if(j>0 && ar[i][j-1]!=c && ar[i][j-1]!='.')    s.insert(ar[i][j-1]);
            }
        }
    }
		
    cout<<s.size();
		
	return 0;
}
