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
    int ar[n+1];
    int c=0,i;

    for(i=0; i<n; i++)  cin>>ar[i];
	
    i=k-1;
    while(ar[i]!=1){
        i++;

        if(i==n){
            i=0;
        }
        if(ar[i]==0){
            c++;
        }
    }	
	
    cout<<c+1;
	return 0;
}
