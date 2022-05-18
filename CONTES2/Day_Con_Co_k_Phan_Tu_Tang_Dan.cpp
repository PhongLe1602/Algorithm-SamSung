#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],n,k;
void out(){
    for(int i=1;i<=k;i++)cout<<b[a[i]]<<" ";
    cout<<endl;
}
void Back_Track(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k)out();
        else Back_Track(i+1);
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a[1005]={};
        b[n];
        for(int i=1;i<=n;i++)cin>>b[i];
        sort(b+1,b+n+1);
        Back_Track(1);
    }
}