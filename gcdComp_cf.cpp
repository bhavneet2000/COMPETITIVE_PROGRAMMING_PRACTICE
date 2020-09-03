#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	   int n;
       cin>>n;
       vector<int>  ar(2*n);
       int i;
       vector<int> odd;
       vector<int> even;

       for(i=0; i<ar.size(); i++){
            cin>>ar[i];
            if(ar[i]&1) odd.push_back(i+1);
            else        even.push_back(i+1);
       }    

       vector<pair<int, int>> v;
       if(odd.size()&1 && even.size()&1){
           for(i=1; i<odd.size(); i+=2)  v.push_back({odd[i], odd[i+1]});

           for(i=1; i<even.size(); i+=2)    v.push_back({even[i], even[i+1]});
       }
       else{
           if(even.size()){
                
                for(i=2; i<even.size(); i+=2)  v.push_back({even[i], even[i+1]});

                for(i=0; i<odd.size(); i+=2)  v.push_back({odd[i], odd[i+1]});

           }

           else{
               for(i=2; i<odd.size(); i+=2)  v.push_back({odd[i], odd[i+1]});

           }
       }

       for(i=0; i<v.size(); i++){
           cout<<v[i].first<<" "<<v[i].second<<en;
       }

	}
		
		
	return 0;
}
