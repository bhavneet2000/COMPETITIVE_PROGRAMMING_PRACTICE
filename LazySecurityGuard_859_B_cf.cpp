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
    int w = sqrt(n);
    if(w*w >= n)    cout<<4*w;
    else if(w*(w+1) >= n) cout<<4*w+2;
    else cout<<4*w+4;
	
		
	return 0;
}
