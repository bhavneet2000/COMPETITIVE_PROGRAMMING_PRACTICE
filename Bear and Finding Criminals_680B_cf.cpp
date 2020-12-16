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
    vector<int> ar(n+1);
    int i;
    for(i=1; i<=n; i++){
        cin>>ar[i];
    }
    bool istrue[n+1];
    int c=0;
	for(i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(abs(k-j) == abs(k-i) && ar[i]!=ar[j]){
                istrue[i] = istrue[j] = true;
            }
        }
    }

    for(i=1; i<=n; i++){
        if(ar[i] && !istrue[i])  c++;
    }
    cout<<c;
    
	return 0;
}
