#include<bits/stdc++.h>
using namespace std;
struct ds{
    int first,second;
};
int n;
ds cv[100005];
bool cmp(ds a,ds b){
    return a.second < b.second;
}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cv[i].first>>cv[i].second;
    }
    sort(cv,cv+n,cmp);
    long long dem=1,start=0;
    for(int i=1;i<n;i++){
        if(cv[i].first>=cv[start].second){
            dem++;
            start=i;
        }
    }
    cout<<dem<<endl;
}
main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}