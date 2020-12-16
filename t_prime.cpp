#include <bits/stdc++.h>
#define ll long long
#define Max 1e6
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

vector<bool> isPrime(Max+1,1);
void seive(){
    int i,j;
    isPrime[0]=isPrime[1]=0;
    for(i=2; i*i<=Max; i++){
        if(isPrime[i]){
            for(j=i*i; j<=Max; j+=i){
                isPrime[j]=0;
            }
        }
    }

}

string tPrime(ll n){
    ll temp = sqrt(n);
    if(n != (temp*temp) || isPrime[temp]==0){
        return "NO";
    
    }
    else{
        return "YES";
    }




}

int main()
{
	fio;
	int t;
	cin>>t;
    seive();
	while(t--){
	        ll n;
            cin>>n;
            
            cout<<tPrime(n)<<en;
	}

		
		
	return 0;
}
