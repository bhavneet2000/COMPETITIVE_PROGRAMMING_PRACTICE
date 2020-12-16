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
    double temp=0;
    for(int i=n; i>0; i--){
        temp+=1.0/i;
    }

    cout << fixed << setprecision(10) << temp << endl;
		
		
	return 0;
}
