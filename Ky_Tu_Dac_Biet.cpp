#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        long long n,k;
        cin>>s>>k;
        n=s.size();
        while(k>n) n*=2;
        //cout<<n<<endl;
        // while(n>s.size()){
        //     if(k>n/2){
        //         k-=n/2;
        //         if(k>1) k-=1;
        //         else k=n/2;
        //     }
        //     n/=2;
        // }
        // cout<<s[k-1]<<endl;
        cout<<s[(n*s.size())/k]<<endl;
    }
}