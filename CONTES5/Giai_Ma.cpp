#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run() int t;cin>>t;while(t--)
#define endl "\n"

int main(){
    run(){
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        int n=s.size();
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=0;
            if(s[i-1]>'0') dp[i]=dp[i-1];
            if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7'))
                dp[i]+=dp[i-2];
        }
        cout<<dp[n]<<endl;
        
    }    
}
