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
        vector<int> ar(200*1000 + 1, 0);
        int i;
        int x;

        for(i=0; i<n; i++){
            cin>>x;
            ar[x]++;
        }
        for(i=0; i<ar.size(); i++){
            if(ar[i]>2){
                cout<<"NO";
                return 0;
            }
        }

        cout<<"YES"<<en<<count(ar.begin(), ar.end(), 2)<<en;
        for(i=0; i<ar.size(); i++){
            if(ar[i]==2){    
                cout<<i<<" ";
                ar[i]--;    
            }
        }
        cout<<en<<count(ar.begin(), ar.end(), 1)<<en;
        for(i=ar.size()-1; i>=0; i--){
            if(ar[i])    cout<<i<<" ";
        }

	return 0;
}
