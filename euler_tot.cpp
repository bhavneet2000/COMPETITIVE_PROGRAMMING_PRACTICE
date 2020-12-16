#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    
	return result;
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		cout<<phi(n)<<en;
		
    }
		
		
	return 0;
}

