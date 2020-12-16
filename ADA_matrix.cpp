#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

void trans(vector<vector<int>> &m, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(m[i][j], m[j][i]);
        }
    }
}


int main()
{
	fio;
	int t;
	cin>>t;
	while(t--){
	        
	        int n;
	        cin>>n;
	        
	        vector<vector<int>> matrix; 
        	for(int i=0;i<n;++i) {
        		
        		vector<int> row; 
        		
        		for(int j=0;j<n;++j){ 
        			int value; 
        			cin >> value; 
        			row.push_back(value); 
        		} 
        		matrix.push_back(row);
        	}
	        
	        int i=0,j=0,c=0;
	        
	        for(j=n-1; j>=0; j--){
	            if(matrix[i][j]!= (j+1)){
	                c++;
	                trans(matrix, j+1);
	            }
	        }
	        
	        
	        cout<<c<<en;
	            
	    }
	      
	    
		
		
	return 0;
}
