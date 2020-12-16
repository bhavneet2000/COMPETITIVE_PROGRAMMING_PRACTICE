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
    int i;
    vector<int> ar(m);
    
    for(i=0; i<m; i++){
        cin>>ar[i];
    }
    if(m==0){    
        cout<<"YES";
        return 0;
    }
    sort(ar.begin(), ar.end());

    if(ar[0]==1 || ar[m-1]==n){
        cout<<"NO";
        return 0;
    }

    for(i=2; i<m; i++){
        if((ar[i]==ar[i-1]+1) && (ar[i]==ar[i-2]+2)){
            cout<<"NO";
            return 0;
        }
    }
		cout<<"YES";
		
	return 0;
}
