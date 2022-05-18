// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define run() int t;cin>>t;while(t--)
// #define endl "\n"
// /**/

// ll dp[105];
// void mi(){
//     dp[1]=1,dp[2]=2,dp[3]=4;
//     for(int i=4;i<=104;i++)
//         dp[i]=dp[i-1]+dp[i-2]+dp[i-3];    
// }
// int main(){
//     mi();
//     run(){
//         int n;
//         cin >> n;
//         cout<<dp[n]<<endl;   
//     }
// }
// A C++ program to count number of ways
// to reach n't stair when
#include <iostream>
using namespace std;
 
// A recursive function used by countWays
int countWays(int n)
{
    int res[n + 1];
    res[0] = 1;
    res[1] = 1;
    res[2] = 2;
    for (int i = 3; i <= 104; i++)
        res[i] = res[i - 1] + res[i - 2] + res[i - 3];
 
    return res[n];
}
 
// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << countWays(n)<<endl;
    }
    return 0;
}
// This code is contributed by shubhamsingh10