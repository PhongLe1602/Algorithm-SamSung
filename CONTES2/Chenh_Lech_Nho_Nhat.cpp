#include<bits/stdc++.h>
using namespace std;
int n,ok,a[1005],k;
void init(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void next(){
    int i=k-1;
    while(i>=1&&a[i]>a[i+1]) i--;
    if(i==0) ok = 0;
    int j=k;
    while(a[i]>a[j])j--;
    swap(a[i],a[j]);
    sort(a+i+1,a+k+1);
}
main(){
    long long MIN=INT_MAX;
    cin>>n>>k;
    vector<string>ve(n);
    for(auto &i:ve) cin>>i;
    init();
    ok=1;
    while(ok){
        multiset<string>mu;
        for(int i=0;i<n;i++){
            string x="";
            for(int j=1;j<=k;j++){
                x+=ve[i][a[j]-1];
            }
            mu.insert(x);
        }
        long long it1=stoll(*mu.begin());
        long long it2=stoll(*mu.rbegin());
        // cout<<it1<<" "<<it2<<endl;
        //cout<<"Phong\n";
        next();
        MIN=min(MIN,it2-it1);
    }
    cout<<MIN;

}