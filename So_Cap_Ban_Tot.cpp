#include<bits/stdc++.h>
using namespace std;
main(){
    long long dem=0;
    int n,k,b[10005]={0},c[10005]={0};
    cin>>n>>k;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[i]=s.size();
    }
    for(int i=0;i<=k;i++){
        b[a[i]]++;
    }
    dem+=b[a[0]]-1;
    int i,i1=0;
    for(i=1;i<n-k;i++){
        b[a[i-1]]--;
        b[a[i+k]]++;
        dem+=b[a[i]]-1;
    }
    i1=i;
    for(;i<n;i++){
        c[a[i]]++;
    }
    dem+=c[a[i1]]-1;
    i1++;
    for(;i1<n;i1++){
        c[a[i1-1]]--;
        dem+=c[a[i1]]-1;
    }
    cout<<dem;
}