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
    vector<tuple<int, int, int, int>> v;
    int i,a,b,c,d;
    for(i=0; i<n; i++){
        cin>>a>>b>>c>>d;
        v.push_back({a,b,c,d});
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(get<0>(v[j]) > get<0>(v[i]) && get<1>(v[j]) > get<1>(v[i]) && get<2>(v[j]) > get<2>(v[i])){
                get<3>(v[i]) = 10000;
                // cout<<i<<en;
                break;
            }
        }
    }
    int ans = INT_MAX, temp;
    for(i=0; i<n; i++){
        if(get<3>(v[i])<ans){
            ans = get<3>(v[i]);
            temp = i+1;
        }
        // if(get<3>(v[i])==10000)   cout<<get<2>(v[i])<<en;
    }
		
    cout<<temp;

	return 0;
}
