#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	int n;
    cin>>n;
    if(n%2==0)  cout<<-1;
    else{
        for(int i=0; i<n; i++){
            cout<<i<<" ";
        }
        cout<<en;
        for(int i=0; i<n; i++){
            cout<<i<<" ";
        }
        cout<<en;
        for(int i=0; i<n; i++){
            cout<<2*i % n<<" ";
        }
        
    }
		
		
	return 0;
}
