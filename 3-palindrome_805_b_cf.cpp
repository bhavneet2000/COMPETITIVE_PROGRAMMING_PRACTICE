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
    while((n-4) >= 0){
        cout<<"abba";
        n-=4;
    }
    if(n==1)    cout<<"a";
    else if(n==2)   cout<<"ab";
    else if(n==3)   cout<<"abb";
		
	return 0;
}
