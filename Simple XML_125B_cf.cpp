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
    int i,j;
    bool val=0;
    int h=0;
    for(i=0; i<s.length(); i+=1){
        if(s[i] == '<' && s[i+1] != '/'){
            for(int j=1; j<=2*h; j++){
                cout<<" ";
            }
            cout<<"<"<<s[i+1]<<">"<<en;
            h++;
        }
        else if(s[i]=='/'){
            h--;
            for(int j=1; j<=2*h; j++){
                cout<<" ";
            }
            cout<<"</"<<s[i+1]<<">"<<en;
        }

    }
		
	return 0;
}
