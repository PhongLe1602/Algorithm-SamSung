#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n+1],dp[1005]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    int MIN=INT_MIN;
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        MIN=max(MIN,dp[i]);
    }
    cout<<MIN;
}