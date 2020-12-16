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
	string S;
    int X;
    cin >> S >> X;
    int N = int(S.size());
    string W(N, '1');
 
    for (int i = 0; i < N; i++)
        if (S[i] == '0') {
            if (i - X >= 0)
                W[i - X] = '0';
 
            if (i + X < N)
                W[i + X] = '0';
        }
 
    for (int i = 0; i < N; i++) {
        bool one = false;
        one = one || (i - X >= 0 && W[i - X] == '1');
        one = one || (i + X < N && W[i + X] == '1');
 
        if (S[i] != one + '0') {
            cout << -1 << '\n';
            return 0;
        }
    }
 
    cout << W << '\n';

	}
		
		
	return 0;
}
