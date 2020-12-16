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
        vector<int> ar(n), count(n+1);
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        
        sort(ar.begin(), ar.end());
        
        int mid = n/2;
        int val = ar[mid], sum=0;
        int temp = val+1;
        for(int i=mid; i>=0; i--){
            sum+= (abs(val - ar[i]));
            val--;
        }
        for(int i=mid+1; i<n; i++){
            sum += (abs(temp - ar[i]));
            temp++;
        }


        cout<<sum<<en;
	}
		
		
	return 0;
}
