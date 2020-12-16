#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
typedef pair<int, int> pii;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	    int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0, j=0;
        int count=0;
        while(i<n && (s[i]!='M' || s[i]!='I')){
            i++;
        }
        j=i+1;
        vector<bool> visited(n);
        for(; i<n; i++){
            if(s[i]=='M' && !visited[i]){
                for(; j<n; j++){
                    if((k+1)==(j-i)){
                        
                        break;
                    }
                    else if(s[j] == 'I' && !visited[j]){
                        int p = (k+1) - abs(j-i);
                        if(p>0){ 
                            count++;
                            visited[i]=1;
                            visited[j]=1;
                        }
                        break;
                    }
                    else if(s[j]=='X'){
                        j++;
                        break;
                    }
                }
            }
                
            else if(s[i]=='I' && !visited[i]){
                for(; j<n; j++){
                    if((k+1)==(j-i)){
                        
                        break;
                    }
                    else if(s[j] == 'M' && !visited[j]){
                        int p = (k+1) - abs(j-i);
                        if(p>0){
                            visited[i]=1;
                            visited[j]=1;
                        }
                        break;
                    }
                    else if(s[j]=='X'){
                        j++;
                        break;
                    }
                }
            }
                
        }

        cout<<count<<en;
	}
		
		
	return 0;
}
