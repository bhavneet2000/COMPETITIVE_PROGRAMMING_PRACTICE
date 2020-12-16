#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	    int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>26){
                cout<<-1;
                return 0;
        }
        vector<int> count(27,0);
        int i;
        for(i=0; i<n; i++){
            count[s[i] - 'a']++;
        }
        int c=0;
		for(i=0; i<27; i++){
            if(count[i]>1)  c+=count[i]-1;
        }
		cout<<c;
	return 0;
}
