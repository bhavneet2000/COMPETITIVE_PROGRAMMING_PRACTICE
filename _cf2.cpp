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
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        vector<int> ar(n);
        for(int i=0; i<n; i++)  cin>>ar[i];
        
        sort(ar.begin(), ar.end());
        int j=0, c=0;
        for(int i=0; i<=n-3; i++){
            while(j+1<n && ar[j+1]-ar[i]<=2)    j++;
            int num = j-i-1;
            if(num<0)   continue;
            c+=num*(num+1)/2;
        }

        cout<<c<<en;
	}
		
		
	return 0;
}
