// // A C++ program to count number of ways
// // to reach n't stair when
// #include <iostream>
// using namespace std;
 
// // A recursive function used by countWays
// int countWays(int n,int k)
// {
//     int res[n + 1];
//     res[0] = 1;
//     res[1] = 1;
//     res[2] = 2;
//     for (int i = 3; i <= n; i++)
//         if(res[i-1]<=k&&res[i-2]<=k&&res[i-3]<=k){
//             res[i] = res[i - 1] + res[i - 2] + res[i - 3];
//         }
//     return res[n-1]+1;
// }
 
// // Driver program to test above functions
// main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         cout<<countWays(n,k)<<endl;
//     }
// }
// // This code is contributed by shubhamsingh10
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL printf("\n")
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
const int p = 1e9+7;
#define run() int t;cin>>t;while(t--)
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	run(){
        int n,k;
        cin >> n >> k;
        ll dp[n+1]={0};
        dp[0]=1,dp[1]=1;
        FOR(i,2,n){
            FOR(j,1,min(i,k)){
                dp[i]+=dp[i-j];
                dp[i]%=p;
            }
        }
        cout<<dp[n]<<endl;
    }
}
