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
    int i;
    double pi = 3.1415926536, ans;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar.begin(), ar.end(), greater<int>());
    for(i=0; i<n; i++){
        if(!(i%2))  ans+=pi*ar[i]*ar[i];
        else        ans-=pi*ar[i]*ar[i];
    }
		
        cout<<ans;
		
	return 0;
}
