// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         string s,mun="";
//         cin>>n>>s;
//         int max1=INT_MIN;
//         for(int i=0;i<n;i++){
//            for(int j=i;j<n;j++){
//                 mun+=s[j];
//                 if(s.find(mun,j)!=-1&&){
//                     int k=mun.size();
//                     max1=max(max1,k);
//                 }
//            }
//         }
//         if(max1==INT_MIN) cout<<0<<endl;
//         else cout<<max1<<endl;
//     }
// }
// C++ program to find the longest repeating
// subsequence
#include <iostream>
#include <string>
using namespace std;
 
// This function mainly returns LCS(str, str)
// with a condition that same characters at
// same index are not considered.
int findLongestRepeatingSubSeq(string str)
{
    int n = str.length();
 
    // Create and initialize DP table
    int dp[n+1][n+1];
    for (int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
            dp[i][j] = 0;
 
    // Fill dp table (similar to LCS loops)
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            // If characters match and indexes are
            // not same
            if (str[i-1] == str[j-1] && i != j)
                dp[i][j] =  1 + dp[i-1][j-1];         
                      
            // If characters do not match
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][n];
}
 
// Driver Program
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s="";
        cin>>n>>s;
        cout<< findLongestRepeatingSubSeq(s)<<endl;
    }
    return 0;
}