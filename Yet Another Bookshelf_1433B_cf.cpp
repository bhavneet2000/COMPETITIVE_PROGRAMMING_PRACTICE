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
        int i;
        vector<int> ar(n);
        for(i=0; i<n; i++)  cin>>ar[i];
        int t1,t2;
        for(i=0; i<n; i++){
            if(ar[i]){
                t1=i;
                break;
            }
        }
        for(i=n-1; i>=0; i--){
            if(ar[i]){   
                t2=i;
                break;
            }
        }
        int c=0;
        
        for(i=t1; i<t2; i++){
            if(!ar[i])  c++;
        }
        cout<<c<<en;
	}
		
		
	return 0;
}
