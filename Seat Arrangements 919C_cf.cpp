#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int i, j, k;
	int n,m;
	int x,y,cnt;

	cin>>n>>m>>k;

	string s[n];
	for(i=0;i<n;i++)
        cin>>s[i];

    cnt=0;

    if(n*m==1)
    {
        if(s[0][0]=='.' && k==1)
            cout<<1;
        else
            cout<<0;

        return 0;
    }

    if(k==1)
    {
        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='.')
                    cnt++;
            }
        }

        cout<<cnt;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
                x++;
            else
            {
                y=x-k+1;
                cnt+=max(y,0);
                x=0;
            }
        }

        y=x-k+1;
        cnt+=max(y,0);
    }

    for(j=0;j<m;j++)
    {
        x=0;
        for(i=0;i<n;i++)
        {
            if(s[i][j]=='.')
                x++;
            else
            {
                y=x-k+1;
                cnt+=max(y,0);
                x=0;
            }
        }

        y=x-k+1;
        cnt+=max(y,0);
    }

    cout<<cnt;

	return 0;
}
