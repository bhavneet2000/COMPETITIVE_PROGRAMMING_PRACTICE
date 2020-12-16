<<<<<<< HEAD
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
    int i = 0,j = n;
    string s;
    cin>>s;
    bool val=0;

    string l = s.substr(0, n);
    string r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    s = l + r;
    if(s[0]>s[n])   val=1;
    else if(s[0]==s[n]){
        cout<<"NO";
        return 0;
    }
    if(val){
        for(i=1; i<n; i++){
            if(s[i]<=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
    }
    else{
        for(i=1; i<n; i++){
            if(s[i]>=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
    }
		
	cout<<"YES";
	return 0;
}
=======
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
    int i = 0,j = n;
    string s;
    cin>>s;
    bool val=0;

    string l = s.substr(0, n);
    string r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    s = l + r;
    if(s[0]>s[n])   val=1;
    else if(s[0]==s[n]){
        cout<<"NO";
        return 0;
    }
    if(val){
        for(i=1; i<n; i++){
            if(s[i]<=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
    }
    else{
        for(i=1; i<n; i++){
            if(s[i]>=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
    }
		
	cout<<"YES";
	return 0;
}
>>>>>>> 0bae5a07f111c342d0f6de5b91cbe1ed9ca949f5
