#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    if(a.second==b.second)  return (a.first<b.first);

    return (a.second < b.second); 
} 

int main()
{
	fio;
	int n;
    cin>>n;
    vector<pair<int, int>> ar;
    int a,b,i;
    for(i=0; i<n; i++){
        cin>>a>>b;
        ar.push_back({a,b});
    }
    sort(ar.begin(), ar.end(), sortbysec);

    // for(i=0; i<n; i++)  cout<<ar[i].first<<" "<<ar[i].second<<en;


    int moves=0,pts=0;
        
        moves+=ar[n-1].second;
        pts+=ar[n-1].first;
        i=n-2;
        
        while(moves>0 && i>=0){
            pts+=ar[i].first;
            moves+=ar[i].second;
            moves--;
            i--;
        }
        
	cout<<pts;
		
	return 0;
}
