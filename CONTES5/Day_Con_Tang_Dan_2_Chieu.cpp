#include<bits/stdc++.h>
using namespace std;
struct dc{
    long long a,b;
};
dc xx[1000005];
bool cmp(dc m,dc n){
    return m.a<n.a;
}
main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>xx[i].a>>xx[i].b;
    }
    sort(xx,xx+n,cmp);
    long long stat1=xx[0].a,stat2=xx[0].b,dem=1;
    for(long long i=1;i<n;i++){
        if(xx[i].a>stat1 and xx[i].b>stat2){
            dem++;stat1=xx[i].a;stat2=xx[i].b;
        }
    }
    cout<<dem;
}