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
        int n,k;
        cin>>n>>k;
        int bits[61]={0};
        int i;
        ll int ar;
        for(i=0; i<n; i++){
            cin>>ar;
            int j=0;
            while(ar){
                bits[j]+=ar%k;
                ar/=k;
                j++;
            }
            
        }
        bool flag=1;
        for(i=0; i<61; i++){
            if(bits[i]>1){
                flag=0;
                break;
            }
        }
        if(flag)    cout<<"YES"<<en;
        else{
            cout<<"NO"<<en;
        }
	}
		
		
	return 0;
}
