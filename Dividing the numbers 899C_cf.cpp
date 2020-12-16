#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
void findSubset(ll s, int n, vector<int> &v){
    if(s==0){
        return;
    }
    if(n==1)
        return;
    return findSubset(s,n-1,v);
    v.push_back(n);
    return findSubset(s-n-1, n-1, v);

}
int main()
{
	fio;
	int n;
    cin>>n;
    vector<int> v;
    deque<int> q;
    int i;
    if(n%2){
        for(i=n; i>=2; i--){
            q.push_back(i);
        }
    }
    else{
        for(i=n; i>=1; i--){
            q.push_back(i);
        }
    }
    int x=0,y=0,k=1;
    while(q.size()){
        if(k%2){
            if(q.size()){
            v.push_back(q.front());
            x+=q.front();
            q.pop_front();
            }
            if(q.size()){
                y+=q.front();
                q.pop_front();
            }
        }
        else{
            if(q.size()){
                v.push_back(q.back());
                x+=q.back();
                q.pop_back();
            }
            if(q.size()){
                y+=q.back();
                q.pop_back();
            }
        }
        k++;
    }
	if(n%2==1){
        if(x<y){
            v.push_back(1);
            x++;
        }
        else{
            y++;
        }
    }
	
    cout<<abs(x-y)<<en;
    cout<<v.size()<<" ";
    for(auto it:v){
        cout<<it<<" ";
    }
	return 0;
}
