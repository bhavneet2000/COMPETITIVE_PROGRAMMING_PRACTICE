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
    string s,res;
    cin>>s;
    
    if(s.length()>1){
    if(s[0]!='1'){
        k--;
    }
    if(k>=0)    cout<<"1";
    else
    {
        cout<<s;
        return 0;
    }
    
    for(int i=1; i<s.length(); i++){
        if(s[i]!='0' && k>0){
            k--;
            cout<<"0";
        }
        else
        {
            cout<<s[i];
        }
        
    }
    }
    else{
        if(k>0)
            cout<<"0";
        else
        {
            cout<<s;
        }
        
    }
		
		
	return 0;
}
