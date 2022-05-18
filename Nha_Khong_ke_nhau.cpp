#include<bits/stdc++.h>
using namespace std;
long long bynary(long long a[], long long n){
    long long x1 = a[0],x2 = 0,x3 = 0;
    for(int i = 1; i < n; i++){
        x3 = (x1 > x2) ? x1 : x2;
        x1 = x2 + a[i];
        x2 = x3;
    }
    return ((x1 > x2) ? (x1) : (x2));
}
main(){
    int t;cin>>t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(auto &i:a) cin >> i;
        cout<<bynary(a,n)<<endl;
    }
}