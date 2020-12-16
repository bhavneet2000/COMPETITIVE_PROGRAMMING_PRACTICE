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
    int i;
    vector<int> ar(n);
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    int c=0,m=0;
    for(i=0; i<n; i++){
        while(i<n && ar[i]==1){
            c++;
            i++;
        }
        if(i>0 && ar[i-1]==1 && ar[i]==0)  m++;
        
    }
    if(c+m > 0)
        cout<<c+m-1;
    else
        cout<<c+m;
    
    
		
		
	return 0;
}
