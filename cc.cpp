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
	        vector<int> ar(n);
	        int i,j;
	        string val="YES";
	        for(i=0; i<n; i++){
	            cin>>ar[i];
	        }
	        
	        for(i=0; i<n; i++){
	            if(__gcd(i+1, ar[i])!=ar[i]){
	                val="NO";
	                break;
	            }
	        }
	        cout<<val<<en;
		}
		
		
	return 0;
}
