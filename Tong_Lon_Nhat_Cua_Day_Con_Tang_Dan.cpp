// #include<bits/stdc++.h>
// using namespace std;
// long long dp[100005];
// main(){
//     int t;cin>>t;
//     while(t--){
//         long long n;
//         cin >> n;
//         long long a[n];
//         for(auto &i:a) cin >> i;
//         memset(dp,0,sizeof(dp));
//         long long ans = a[0];
//         dp[0]=a[0];
//         for(int i = 1; i < n;i++){
//             dp[i] = a[i];
//             for(int j = 0; j < i;j++){
//                 if(a[i] > a[j]){
//                     dp[i] = max(dp[i],dp[j]+a[i]);
//                 }
//                 ans = max(ans,dp[i]);
//             }
//         }
//         cout << ans <<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
main(){
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        long long ans=0;
        memset(dp,0,sizeof(dp));
        for(int i = 1;i <= s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                ans = max(ans,dp[i][j]);
            }
        }
        queue<int>q;
        cout<<ans<<endl;
        // for(int i=1;i<=s1.size();i++){
        //     for(int j=1;j<=s2.size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}