#include <bits/stdc++.h>
#define ll long long
#define n 1e6
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<int> seive(){
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

vector<int> primes;
primes.push_back(2);

for(i=3; i<=n; i++){
    if(isPrime[i]==i)   primes.push_back(i);
}



return primes;
}
int solve(ll x,ll y, vector<int> primes){
int c=0;
vector<bool> isPrime(y-x+1, 1);
for(int i=0; primes[i]*primes[i]<=y; i++){
    int curPrime = primes[i];
    int base = (x/curPrime)*curPrime;
    if(base<x)  base+=x;
    for(int j=base; j<=y; j+=curPrime){
        isPrime[j-l]=0;
    }
    if(base == curPrime)    isPrime[base]=1;
}

for(i=0; i<isPrime.size(); i++){
    if(isPrime[i])  c++;
}

return c;
}
int main()
{
	fio;

        vector<int> primes = seive();
	    ll x,y;
        cin>>x>>y;
        cout<<solve(x, y, primes);

		
		
	return 0;
}
