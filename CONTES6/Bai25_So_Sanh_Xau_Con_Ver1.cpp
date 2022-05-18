#include<bits/stdc++.h>
using namespace std;
main(){
    string s;
    cin>>s;
    long long a[s.size()+2]={0};
    for(int i=0;i<s.size();i++){
        if(i==0){
            a[i]=(int)(s[i]-'a') + 1;
        }else a[i]=a[i-1] + (int)(s[i] - 'a') + 1;
    }
    long long q;cin>>q;
    while(q--){
        long long x,y,z,t;
        cin>>x>>y>>z>>t;
        long long u = a[y-1] - a[x-1];
        long long v = a[t-1] - a[z-1];
        if(u!=v) cout<<"NO\n";
        else cout<<"YES\n";
    }
}