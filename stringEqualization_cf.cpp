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
	    string s1,s2;
        cin>>s1>>s2;
        int i,j;
        bool c=0;
        for(i=0; i<s1.length(); i++){
            for(j=0; j<s1.length(); j++){
                if(s1[i]==s2[j])  c=1;
            }
            if(c)    {
                cout<<"YES"<<en;
                break;
            }
        }
        if(!c)  cout<<"NO"<<en;
        

	}
		
		
	return 0;
}
