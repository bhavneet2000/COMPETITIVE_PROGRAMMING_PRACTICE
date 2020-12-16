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
        ll x;
        cin>>x;
        int i;
        vector<ll> ar(n);

        for(i=0; i<n; i++)  cin>>ar[i];

        sort(ar.begin(), ar.end(), greater<int>());
        
        ll sum=0,c=0;
        vector<int> extra;
        for(i=0; i<n; i++){
            if(ar[i]>=x){
                sum+=ar[i];
                c++;
            }
            else{
                extra.push_back(ar[i]);
            }
        }
        for(i=0; i<extra.size(); i++){
            sum+=extra[i];
            if((sum/(c+1)) >= x)    c++;
            else                    break;
        }

        cout<<c<<en;

	}
	

		
	return 0;
}
