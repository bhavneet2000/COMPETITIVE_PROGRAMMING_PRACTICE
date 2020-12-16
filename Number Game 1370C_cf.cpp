#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
bool check_prime(int n){
    int N=50000;
	for(int i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
    fio;
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		bool lose = (n == 1);
		if(n > 2 && n % 2 == 0){
			if((n & (n - 1)) == 0)
				lose = 1;
			else if(n % 4 != 0 && check_prime(n / 2))
				lose = 1;
		}

        if(lose)    cout<<"FastestFinger"<<en;
        else        cout<<"Ashishgup"<<en;
		
    }
	return 0;
}
