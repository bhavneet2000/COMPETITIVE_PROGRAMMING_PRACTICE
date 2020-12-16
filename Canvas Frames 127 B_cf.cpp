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
    vector<int> ar(n);
    unordered_set<int> s;
    int i;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    int c=n;
    for(i=0; i<n; i++){
        if(!s.count(ar[i]) && count(ar.begin(), ar.end(), ar[i]) %2)  c--;

        s.insert(ar[i]);
    }
	
    cout<<c/4;
		
	return 0;
}
