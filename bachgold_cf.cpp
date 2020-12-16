#include <bits/stdc++.h>
#define ll long long
#define Max 100000
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

// vector<bool> isPrime(Max+1,1);
// vector<int> seive(){
//     int i,j;
//     for(i=2; i*i<=Max; i++){
//         if(isPrime[i]){
//             for(j=i*i; j<=Max; j++){
//                 isPrime[j]=0;
//             }
//         }
//     }

//     vector<int> prime;
//     prime.push_back(2);
//     for(i=3; i<=Max; i++){
//         if(isPrime[i])
//             prime.push_back(isPrime[i]);
//     }

//     return prime;
// }

int main()
{
	fio;
	int n;
    cin>>n;
    int i;
    cout<<n/2<<en;
    if(n&1){
        
        for(i=1; i<n/2; i++){
            cout<<2<<" ";

        }
        cout<<3;
    }
    else{
        for(i=1; i<=n/2; i++){
            cout<<2<<" ";
        }
    }
    
		
	return 0;
}
