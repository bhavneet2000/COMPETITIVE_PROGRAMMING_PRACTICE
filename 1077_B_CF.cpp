#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    vector<int> ar(n);
    int i;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    int c=0;
    for(i=1; (i+1)<n; i++){
        if(ar[i-1]==1 && ar[i]==0 && ar[i+1]==1){
            c++;
            ar[i+1]=0;
        }
    }
	
    cout<<c;
		
	return 0;
}
