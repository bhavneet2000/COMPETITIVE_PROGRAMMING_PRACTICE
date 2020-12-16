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
        string s,s1,s2;
        cin>>n>>s;
        int i;
        s1.push_back('1');
        s2.push_back('1');

        for(i=1; i<n; i++){
            if(s[i]=='1'){
                s1.push_back('1');
                s2.push_back('0');
                for(int j=i+1; j<n; j++){
                    s1.push_back('0');
                    s2.push_back(s[j]);
                }
                break;
            }
            else{
                s1.push_back('0' + (s[i] - '0')/2);
                s2.push_back('0' + (s[i] - '0')/2);

            }
        }
        cout<<s1<<en<<s2<<en;
	}
		
		
	return 0;
}
