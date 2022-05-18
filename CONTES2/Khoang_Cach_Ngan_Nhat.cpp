#include<bits/stdc++.h>
using namespace std;
main(){
    long long n,m,c1,c2,c3=0,MIN=INT_MAX,MIN2=INT_MAX,dem=0;
    cin>>n>>m>>c1>>c2;
    vector<long long>ve1(n),ve2(m);
    //long long ve1[n],ve2[m];
    set<long long>mu;
    for(long long i=0;i<n;i++)cin>>ve1[i];
    for(long long i=0;i<m;i++){
        cin>>ve2[i];
        mu.insert(ve2[i]);
    }
    sort(ve1.begin(),ve1.end());
    sort(ve2.begin(),ve2.end());
    map<string,int>mp;
    map<long long,long long>mp1;
    for(long long i=0;i<n;i++){
        auto it=lower_bound(ve2.begin(),ve2.end(),ve1[i]);
        if(it!=ve2.end()){
            long long k=it-ve2.begin(),z1=0;
            z1=abs(ve1[i]-ve2[k]);
            MIN=min(MIN,z1);
        }
    }
    for(int i=0;i<m;i++){
        long long k1=MIN+ve2[i];
        long long k2=abs(MIN-ve2[i]);
        auto k3=lower_bound(ve1.begin(),ve1.end(),k1);
        auto k4=lower_bound(ve1.begin(),ve1.end(),k2);
        if(k3!=ve1.end()){
            long long x1=k3-ve1.begin();
            if(ve1[x1]==k1){
                if(abs(ve1[x1]-ve2[i])==MIN) dem++;
            }
        }
        if(k4!=ve1.end()){
            long long x2=k4-ve1.begin();
            if(ve1[x2]==k2){
                if(abs(ve1[x2]-ve2[i])==MIN) dem++;
            }
        }
    }
    c3=abs(c1-c2);
     cout<<c3+MIN<<" "<<dem;
}