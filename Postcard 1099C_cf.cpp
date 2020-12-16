#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	string s;
    cin>>s;
    int k;
    cin>>k;
    int i;
    string s1,s2,s3;
    int c=0;
    for(i=0; i<s.length()-1; i++){
        if(s[i+1]=='?'){
            s1.push_back(s[i]);
            i++;
        }
        else if(s[i+1] == '*'){
            s2.push_back(s[i]);
            i++;
        }
        else    
            s3.push_back(s[i]);
    }
    if(s.back()!='?' && s.back()!='*')
        s3.push_back(s[i]);

    if(s3.size()==k){    
        cout<<s[i];
        return 0;    
    }
    else if(s3.size()>k){
        cout<<"Impossible";
        return 0;
    }
    
    c = k-s3.size();

    
	return 0;
}
