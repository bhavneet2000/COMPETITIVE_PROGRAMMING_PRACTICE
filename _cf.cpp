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

bool iseq(vector<int> ar, int n){
    for(int i=0; i<n-1; i++){
        if(ar[i]!=ar[i+1])  return 0;
    }
    return 1;
}

int32_t main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0, j=n-1;
        string t = s;
        int c=0;
        bool flag=0;
        reverse(t.begin(), t.end());
        int bi, bj;
        while(i<j){
            if(s[i]==s[j]){
                bi=0, bj=0;
                continue;
            }
            if(i+1==j){
                flag=1;
                break;
            }

            if(s[i]!=s[j]){
                if(!bi && s[i+1]==s[j]) {   
                    swap(s[i], s[i+1]);
                    bi=1;
                    bj=0;
                    c++;
                }
                else if(!bj && s[i]==s[j-1]) {
                    swap(s[j], s[j-1]);
                    bj=1;
                    bi=0;
                    c++;
                }
                else{
                    flag=1;
                    break;
                }
            }
            i++, j--;
        }
        if(flag==1) cout<<"NO"<<en;
        else{
            cout<<"YES"<<en;
            cout<<c<<en;
        }
	}
		
		
	return 0;
}
