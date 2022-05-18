#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long sum=0;
        cin>>n;
        multiset<long long>mu;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            mu.insert(x);
        }
        while(mu.size()>=2){
            auto it=mu.begin();
            long long x=0,y=0;
            x=(*it);
            mu.erase(it);
            auto it1=mu.begin();
            y=(*it1);
            mu.erase(it1);
            sum+=(x+y)%mod;
            mu.insert((x+y)%mod);
        }
        cout<<sum%mod<<endl;
    }
}