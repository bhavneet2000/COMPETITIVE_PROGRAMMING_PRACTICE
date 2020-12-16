#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
vector<int> res;

void posand(){
    int MAX = 1e6;
    res.push_back(2);
    res.push_back(3);
    res.push_back(1);

    vector<int> temp;

    for(int i=4; i<=MAX; i+=3){
        for(int j=i; j<i+3; j++){
            temp.push_back(j);
        }
        
            if(temp[0]&res.back()>0){
                res.push_back(temp[0]);
                res.push_back(temp[2]);
                res.push_back(temp[1]);
            }
            else if(temp[1]&res.back()>0){
                res.push_back(temp[1]);
                res.push_back(temp[2]);
                res.push_back(temp[0]);
            }
            temp.clear();
    }
}

int main()
{
	fio;
	int t;
	cin>>t;
    posand();
	while(t--){
	    int n;
        cin>>n;
        vector<int> ar;
        if(!(n&(n-1))){
            cout<<-1<<en;
        }
        else{
            
            for(int i=0; i<n-n%3; i++){
                cout<<res[i]<<" ";
            }
            if(n%3==1){
                cout<<n<<" ";
            }
            else if(n%3==2){
                cout<<n<<" "<<n-1<<" ";
            }
            cout<<en;
        }
        
	}
		
		
	return 0;
}
