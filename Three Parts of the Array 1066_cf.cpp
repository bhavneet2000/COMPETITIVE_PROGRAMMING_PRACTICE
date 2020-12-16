#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n;
    cin>>n;
    ll a[n+1];
    for (int i=1; i<=n; i++)
		cin >> a[i];
	int i = 0, j = n+1;
	ll s1 = 0, s2 = 0, solidx = 0;
	while (i < j) {
		if (s1 < s2)
			s1 += a[++i];
		else if (s1 > s2)
			s2 += a[--j];
		else {
			solidx = i;
			s1 += a[++i];
			s2 += a[--j];
		}
	}
	
	cout << accumulate(a+1, a+solidx+1, 0ll);
		
	return 0;
}
