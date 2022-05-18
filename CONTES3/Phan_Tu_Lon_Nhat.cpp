#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        multiset<long long>ml;
        cin>>n>>k;
        long long a[n];
        for(auto &i:a)cin>>i;
        for(int i=0;i<k;i++)ml.insert(a[i]);
        auto it=ml.rbegin();
        cout<<(*it)<<" ";
        for(int i=1;i<n-k+1;i++){
            auto it1=ml.find(a[i-1]);
            ml.erase(it1);
            ml.insert(a[i+k-1]);
            auto it2=ml.rbegin();
            cout<<(*it2)<<" ";
        }
        cout<<endl;
    }
}