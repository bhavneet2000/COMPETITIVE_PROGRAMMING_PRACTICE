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
    int i,j;
    vector<int> ar(n);
    for(i=0; i<n; i++)  cin>>ar[i];
    for(i=1; i<n; i++){
        if(i%2){
            if(ar[i]<ar[i-1]){
                swap(ar[i], ar[i-1]);
            }

        }
        else{
            if(ar[i]>ar[i-1]){
                swap(ar[i], ar[i-1]);
            }
        }
    }
    bool val=1;
    for(i=1; i<n; i++){
        if(i%2){
            if(ar[i]<ar[i-1]){
                val=0;
                break;
            }

        }
        else{
            if(ar[i]>ar[i-1]){
                val=0;
                break;
            }
        }
    }
	if(val){
        for(i=0; i<n; i++){
            cout<<ar[i]<<" ";
        }
    }
    else{
        cout<<"Impossible";
    }
		
	return 0;
}
