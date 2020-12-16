#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	
	    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i;
        if(n==k){    
            cout<<s;
            return 0;
        }
        int c1 = (n-k)/2;
        int c2 = c1;
        for(i=0; i<n; i++){
            if(c1 && s[i]=='('){
                s.erase(s.begin()+i);
                c1--;
                i--;
            }
            if(c2 && s[i]==')'){
                s.erase(s.begin()+i);
                c2--;
                i--;
            }
            if(c1==0 && c2==0){
                break;
            }
            
        }
	
		cout<<s;

		
	return 0;
}
