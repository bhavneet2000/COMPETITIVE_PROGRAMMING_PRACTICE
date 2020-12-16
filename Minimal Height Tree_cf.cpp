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
	    int n,p=0,i;
		cin>>n;
		int a[n],pa[n];
		pa[0] =-1;
		pa[1] = 0;
		cin>>a[0]>>a[1];
		for(i=2;i<n;++i)
		{
			cin>>a[i];
			if(a[i]<a[i-1])
			p++;
			pa[i] = pa[p]+1;
		}
		cout<<pa[n-1]+1<<en;

	}
		
		
	return 0;
}
