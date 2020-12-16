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
        int ar[n];
        for(int i=0; i<n;i++){
            cin>>ar[i];

        }
        int max = *max_element(ar, ar+n);
        int it;
        for (int i = 0; i < n; i++)
        {
            if(ar[i]==max){
                it=i;
                break;
            }
        }
        if(is_sorted(ar, ar+it)){
            if(is_sorted(ar+it, ar+n, greater<int>())){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"NO";
        }


        
        

		
		
	return 0;
}
