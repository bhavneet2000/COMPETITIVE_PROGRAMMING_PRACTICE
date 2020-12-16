#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
    int i, j, k;
    int n, m, idx;
    string s, s2;

    cin >> s;

    n = s.length();
    int cnt = 0;

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            cnt++;
    }

    k = 0; idx = 0;
    for(i = 0; i < n; i++)
    {
        if(k == cnt) break;

        if(s[i] == 'a')
            k++, idx = i + 1;
        else
            s2.push_back(s[i]);
    }

    k = n - idx;
    k -= s2.length();

    if(k % 2 == 0)
    {
        k /= 2; j = idx; idx += k;
        while(k > 0)
        {
            s2.push_back(s[j]);
            j++; k--;
        }

        k = s.length() - 1;
        for(i = s2.length() - 1; i >= 0; i--)
        {
            if(s2[i] != s[k]){
                cout<<":("; 
                return 0;
            }

            k--;
        }

        for(i = 0; i < idx; i++)
            cout << s[i];
    }

    else
        cout<<":(";

    return 0;
}

