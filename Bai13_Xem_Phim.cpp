#include<bits/stdc++.h>
using namespace std;
int dp[105][25005]={0};
main(){
    int n,k,res=0;
    cin>>k>>n;
    int a[n+3];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=a[i]&&dp[i-1][j-a[i]]+a[i]>dp[i-1][j]){
                dp[i][j]=dp[i-1][j-a[i]]+a[i];
            }
            res=max(res,dp[i][j]);
        }
    }
    cout<<res;
}