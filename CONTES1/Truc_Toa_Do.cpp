#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n;
struct cv{
    int first,second;
};
cv a[1000005];
bool cmp(cv x,cv y){
    return x.second < y.second;
}
void nhap(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
}
void solve(){
    sort(a,a+n,cmp);
    long long count=1;
    int strart=a[0].second;
    for(int i=1;i<n;i++){
        if(a[i].first>=strart){
            count++;
            strart=a[i].second;
        }
    }
    cout<<count<<endl;
}
main(){
    int t;
    cin>>t;
    while(t--){
        nhap();
        solve();
    }
}