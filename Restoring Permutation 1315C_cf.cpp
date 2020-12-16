<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        vector<int> ar(n+1);
        int i,j;
        for(i=1; i<=n; i++)  cin>>ar[i];

        for(i=1; i<=2*n; i+=2){
            j=ar[i]+1;
            while(count(ar.begin(), ar.end(), j)!=0 && j<=2*n){
                j++;
            }
            if(j>2*n){
                break;
            }
            else{
                ar.insert(ar.begin()+i+1,j);
            }
        }
        if(ar.size()==2*n+1){
            for(i=1; i<=2*n; i++){
                cout<<ar[i]<<" ";
            }
            cout<<en;
        }
        else{
            cout<<-1<<en;
        }
	}
    
    
		
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
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        vector<int> ar(n+1);
        int i,j;
        for(i=1; i<=n; i++)  cin>>ar[i];

        for(i=1; i<=2*n; i+=2){
            j=ar[i]+1;
            while(count(ar.begin(), ar.end(), j)!=0 && j<=2*n){
                j++;
            }
            if(j>2*n){
                break;
            }
            else{
                ar.insert(ar.begin()+i+1,j);
            }
        }
        if(ar.size()==2*n+1){
            for(i=1; i<=2*n; i++){
                cout<<ar[i]<<" ";
            }
            cout<<en;
        }
        else{
            cout<<-1<<en;
        }
	}
    
    
		
	return 0;
}
>>>>>>> 0bae5a07f111c342d0f6de5b91cbe1ed9ca949f5
