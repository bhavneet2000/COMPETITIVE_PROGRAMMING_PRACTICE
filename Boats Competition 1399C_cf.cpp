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
	    int n;
        cin>>n;
        vector<int> count(n+1,0);
        int i,j;
        int ar;
        for(i=0; i<n; i++){
            cin>>ar;
            count[ar]++;
        }
        int temp=0;
        int ans=0;
        for(i=2; i<=2*n; i++){
            temp=0;
            for(j=1; j<(i+1)/2; j++){
                if(i-j > n)    continue;
                else            temp+=min(count[j], count[i-j]); 
            }
            if(i%2==0)  temp+=count[i/2]/2;
            ans = max(temp, ans);
        }
        
        cout<<ans<<en;
    
    
    
    }
		
		
	return 0;
}
