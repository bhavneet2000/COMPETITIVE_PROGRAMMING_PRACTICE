#include<bits/stdc++.h>
	using namespace std;
	long long n,m,a[300000],b[300000],p=0,q=0,r=1,x;
	map<long,long> mp;
	int main()
	{
		cin>>n;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			mp[x]++;
		}
		cin>>m;
		for(long long i=0;i<m;i++) cin>>a[i];
		for(long long i=0;i<m;i++) cin>>b[i];
		for(long long i=0;i<m;i++) 
		{
			if(mp[a[i]]>q||(mp[a[i]]==q && mp[b[i]]>p))
			{
				q=mp[a[i]];
				p=mp[b[i]];
				r=i+1;
			}
		}
		cout<<r;
	}
