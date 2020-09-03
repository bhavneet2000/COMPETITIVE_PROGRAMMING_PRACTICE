#include <bits/stdc++.h>
#define ll long long
#define Max 1e7
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<int> seive(ll n){
ll i;
vector<int> isPrime(n+1);

for(i=1; i<=n; i++){
    isPrime[i] = i;
}

for(i=2; i*i<=n; i++){
    if(isPrime[i]==i){
        for(ll j=i*i; j<=n; j+=i){
            if(isPrime[j]==j)
            isPrime[j]=i;
        }
    }
}
return isPrime;
}

vector<int> factorise(ll n, vector<int> isPrime){
    vector<int> fcs;
    while(n!=1){
        fcs.push_back(isPrime[n]);
        n/=isPrime[n];
    }

    return fcs;
}

int digSum(ll n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }

    return sum;

}



int main()
{
	fio;
	ll n,i;

    cin>>n;
    vector<int> isPrime = seive(n);
    vector<int> pf = factorise(n, isPrime);
    int sum1=0,sum2=0;
    sum2=digSum(n);
    for(i=0; i<pf.size(); i++){
        sum1+=digSum(pf[i]);
    }

    if(sum1 == sum2)    cout<<1;
    else                cout<<0;
    
		
		
	return 0;
}
