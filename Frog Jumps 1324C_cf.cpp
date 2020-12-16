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
	    string s;
        cin>>s;
        vector<int> frog;
        frog.push_back(0);
        int i;
        for(i=0; i<s.length(); i++){
            if(s[i]=='R')   frog.push_back(i+1);
        }
        int mf=0;
        frog.push_back(s.length()+1);
        for(i=0; i<frog.size()-1; i++){
            if(frog[i+1]-frog[i] > mf){
                mf = frog[i+1]-frog[i];
            }
        }
        cout<<mf<<en;

	}
		
		
	return 0;
}
