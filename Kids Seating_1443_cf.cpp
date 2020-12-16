#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;


int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int i;
        
        vector<int> ar;
        int temp = n*2;
        for(i=1; i<=n; i++){
            ar.push_back(temp);
            temp+=2;
        }
        for(auto it:ar){
            cout<<it<<" ";
        }
        cout<<en;
	}
		
		
	return 0;
}
