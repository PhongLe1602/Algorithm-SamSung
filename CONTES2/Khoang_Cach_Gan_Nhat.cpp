#include<bits/stdc++.h>
using namespace std;
main(){
    long long n,m,c1,c2,c3,MIN1=INT_MAX,MIN2=INT_MAX,MIN3=0;
    cin>>n>>m>>c1>>c2;
    c3=(abs(c2-c1));
    map<long long,long long>mp1,mp2;
    long long a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);sort(b,b+m);
    for(int i=0;i<n;i++){
        auto it=lower_bound(b,b+m,a[i]);
        if(it!=(b+m)){
            auto k=it-b;
            MIN1=min(MIN1,(abs(a[i]-b[k])));
            mp1[MIN1]++;
        }
    }
    for(int i=0;i<m;i++){
        auto it=lower_bound(a,a+n,b[i]);
        if(it!=(a+n)){
            auto k=it-a;
            MIN2=min(MIN2,(abs(b[i]-a[k])));
            mp2[MIN2]++;
        }
    }
    if(MIN1==MIN2){
        c3+=MIN1;MIN3=mp1[MIN1]+mp2[MIN2];
    }
    cout<<c3<<" "<<MIN3;
}