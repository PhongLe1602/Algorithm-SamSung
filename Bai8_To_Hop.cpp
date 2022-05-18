#include<bits/stdc++.h>
using namespace std;
const int Mod = 1e9 + 7;
int dp[1005][1005];
main(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            dp[i][j]%=Mod;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
}