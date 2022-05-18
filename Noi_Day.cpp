#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long sum=0;
        cin>>n;
        multiset<int>mu;
        for(int i=0;i<n;i++){
            int x;
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
            sum+=x+y;
            mu.insert(x+y);
        }
        // // auto it=mu.begin();
        // // sum+=(*it);
        // for(auto i:mu) cout<<i<<"\n";
        cout<<sum<<endl;
    }
}