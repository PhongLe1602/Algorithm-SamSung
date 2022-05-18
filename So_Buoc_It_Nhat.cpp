#include<bits/stdc++.h>
using namespace std;
long long dp[100005];
main(){
    int t;cin>>t;
    while(t--){
        long long n,ans = 0;
        cin >> n;
        long long a[n];
        for(auto &i:a) cin >> i;
        memset(dp,0,sizeof(dp));
        ans = a[0];
        dp[0]=a[0];
        for(int i = 1;i < n;i++){
            dp[i]=a[i];
            dp[i] = max(dp[i],dp[i-1]+a[i]);
            ans = max(dp[i],ans);
        }
        cout << ans <<endl;
    }
}