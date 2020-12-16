#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<vector<int>> g;
vector<bool> visited;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n,x,k,y;
        cin>>n>>k>>x>>y;
        vector<bool> city(n+1, 0);
        int i=1;
        city[x]=1;
        x=(x+k)%n;
        bool temp=0;
        while(true){
            if(x==y){
                cout<<"YES"<<en;
                break;
            }
            if(city[x]==0)   city[x]=1;
            else{
                cout<<"NO"<<en;
                break;
            }
            
            x=(x+k)%n;

        }
	}
		
		
	return 0;
}
