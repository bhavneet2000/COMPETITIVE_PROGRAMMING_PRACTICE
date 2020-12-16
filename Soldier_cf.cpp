#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	queue<int> s1,s2;
    int n;
    cin>>n;
    int k1,k2;
    cin>>k1;
    for(int i=0; i<k1; i++){
        int x;
        cin>>x;
        s1.push(x);
    }
    cin>>k2;
    for(int i=0; i<k2; i++){
        int x;
        cin>>x;
        s2.push(x);
    }
    int f = n*(n-1);
    if(n>=10)   f*=(n-2);
    int count=0;
    while(!s1.empty() && !s2.empty()){
        int a = s1.front();
        int b = s2.front();
        s1.pop();
        s2.pop();
        if(a>b){
            s1.push(b);
            s1.push(a);
        }
        else{
            s2.push(a);
            s2.push(b);
        }
        count++;
        if(count>f) break;
    }
    if(s1.empty())    cout<<count<<" "<<2;
    else if(s2.empty()) cout<<count<<" "<<1;
    else                cout<<-1;
		
		
	return 0;
}
