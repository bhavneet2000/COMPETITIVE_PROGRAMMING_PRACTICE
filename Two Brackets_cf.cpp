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
        string s;
        cin>>s;
        int c=0;
        int round=0;
        int sq=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                round++;
            }
            else if(s[i]=='['){
                sq++;
            }
            else if(s[i]==']' && sq>0){
                sq--;
                c++;
            }
            else if(s[i]==')' && round>0){
                round--;
                c++;
            }
        }
        cout<<c<<en;

	}
		
		
	return 0;
}
