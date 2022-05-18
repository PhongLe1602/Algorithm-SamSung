#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int x=0;x<n;x++){
        cin>>a[x];
        if(a[x]>0)sum+=a[x];
    }
    cout<<sum*2;
}