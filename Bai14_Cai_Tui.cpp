#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n,m,k;
int res=0;
int dp[1005][1005]={0};
int a[1005],b[1005];
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=a[i]&&dp[i-1][(j-a[i])]+b[i]>dp[i-1][j]){
                dp[i][j]=dp[i-1][j-a[i]]+b[i];
            }
            res=max(res,dp[i][j]);
        }
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a[n+3]={0};b[n+3]={0};
        res=0;
        dp[1005][1005]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        solve();
        cout<<res<<endl;
    }
}