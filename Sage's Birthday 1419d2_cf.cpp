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
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar.begin(), ar.end());
    for(i=0; i<n; i++){
        if(i<n-1)
            swap(ar[i], ar[i+1]);
        i++;
    }
    if(n%2)
        cout<<n/2<<en;
    else
        cout<<n/2-1<<en;
	for(i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
		
	return 0;
}
