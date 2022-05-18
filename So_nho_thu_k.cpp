#include<bits/stdc++.h>
using namespace std;
main(){
    long long n,k;
    cin>>n>>k;
    long long a[n];
    for(auto &i:a)cin>>i;
    for(int i=0;i<k;i++){
        long long p,q,z;
        cin>>p>>q>>z;
        multiset<long long>mu;
        for(int j=p-1;j<=q-1;j++){
            mu.insert(a[j]);
        }
        auto itr=mu.begin();
        advance(itr,z-1);
        cout<<*itr<<endl;
    }
}