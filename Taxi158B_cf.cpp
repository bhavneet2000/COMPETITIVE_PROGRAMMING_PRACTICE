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
    vector<int> ar(n);
    int i;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    int one = count(ar.begin(), ar.end(), 1);
    int two = count(ar.begin(), ar.end(), 2);
    int three = count(ar.begin(), ar.end(), 3);
    int four = count(ar.begin(), ar.end(), 4);

    int c = four + three + two/2;
    one-=three;
    if(two%2){
        c++;
        one-=2;
    }
    if(one>0){
        c+=ceil((double)one/4);
    }
    
    cout<<c;
	return 0;
}
