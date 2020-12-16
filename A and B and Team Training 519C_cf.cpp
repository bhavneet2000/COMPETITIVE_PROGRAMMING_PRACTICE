<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
    int a,b;
    cin>>a>>b;
    int t = min(a, b);
    b = max(a, b);
    a = t;
    int c=0;
    while(a>0 && b>0 && b>a){
        c++;
        a--;
        b-=2;
    }
    if(a==0 && b>=0)    cout<<c;
    else if(b<0){
        cout<<c-1;
    }
    else{
        c+=(a+b)/3;
        cout<<c;
    }

 	return 0;

    
=======
#include <bits/stdc++.h>
#define ll long long
#define en "\n"
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
	fio;
    int a,b;
    cin>>a>>b;
    int t = min(a, b);
    b = max(a, b);
    a = t;
    int c=0;
    while(a>0 && b>0 && b>a){
        c++;
        a--;
        b-=2;
    }
    if(a==0 && b>=0)    cout<<c;
    else if(b<0){
        cout<<c-1;
    }
    else{
        c+=(a+b)/3;
        cout<<c;
    }

 	return 0;

    
>>>>>>> 0bae5a07f111c342d0f6de5b91cbe1ed9ca949f5
}