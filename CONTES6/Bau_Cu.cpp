#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[10]={0};
    for(auto &i:a){
        cin>>i;b[i]++;
    }
    //sort(b,b+10);
    int MAX1=INT_MIN,MAX2=INT_MIN,x=0;
    for(int i=0;i<n;i++){
        MAX1=max(MAX1,b[a[i]]);
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]<MAX1&&b[a[i]]>MAX2){
            MAX2=b[a[i]];x=a[i];
        }
    }
    if(MAX2==INT_MIN)cout<<"NONE";
    else cout<<x;
}