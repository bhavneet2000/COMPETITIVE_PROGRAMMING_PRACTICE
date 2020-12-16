#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	__int64 r,l;
    __int64 i;
    cin>>l>>r;

    if((r-l)<1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<en;
    for(i=0; i<(r-l+1)/2; i+=1){
        cout<<l+2*i<<" "<<l+2*i+1<<en;
    }

    
		
		
	return 0;
}
