#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int i,j;
    vector<int> res;
    vector<int> finalRes;
    for(i=0; i<n; i++)  res.push_back(i+1);
    for(i=0; i<m-n+1; i++){
        finalRes.clear();
        for(j=0; j<n; j++){
            if(s1[j]!=s2[i+j]){
                finalRes.push_back(j+1);
            }
        }
        if(res.size()>finalRes.size()){
            res = finalRes;
        }
    }
	
    cout<<res.size()<<en;
    for(i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
		
	return 0;
}
