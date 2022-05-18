#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,dem=1,k=0,h;
        cin>>n;
        if(n<5){
            cout<<0<<endl;
            continue;
        }
        if(n>=5&&n<10){
            cout<<10<<endl;
            continue;
        }
        while(n>0){
            h=k;
            k=n%10;
            dem*=10;
            n/=10;
        }
        dem/=10;
        if(h>=5) cout<<(k+1)*dem<<endl;
        else cout<<k*dem<<endl;
    }
}