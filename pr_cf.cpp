#include <bits/stdc++.h>
#define int long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

vector<int> sieve(int m){
    vector<bool> is_prime(m+1, 1);
    is_prime[0]=0, is_prime[1]=0;
    vector<int> primes;
    vector<int> factors(m+1);
    for(int i=2; i<=m; i++){
        if(is_prime[i]){
          primes.push_back(i);
          factors[i] = i;
        }
        for(int j=0; j<primes.size() && i*primes[j]<=m && primes[j]<=factors[i]; j++){
          is_prime[i*primes[j]]=0;
          factors[i*primes[j]] = primes[j];
        }
    }
    return primes;
}



int32_t main()
{
	fio;
	string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    int r;
    cin>>r;
    int cost = pb+pc+ps;
    int B=0,S=0,C=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='B')   B++;
        else if(s[i]=='C')  C++;
        else                S++;
    }

    
    int ans;
    int lo=0, hi = 1e13;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        int xb = max((int)0, B*mid - nb);
        int xs = max((int)0, S*mid-ns);
        int xc = max((int)(0), C*mid - nc);
        int tot_pr = pb*xb + pc*xc + ps*xs;
        if(tot_pr>r){
            hi = mid-1;
        }
        else{
            ans = mid;
            lo = mid+1;

        }
    }
	cout<<ans;
	return 0;
}
