#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL printf("\n")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a) memset(a, 0, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
#define run() int t;cin>>t;while(t--)
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void reverseStr(string& str) {
    int n = str.length();
    FOR(i,0,n/2 - 1)
        swap(str[i], str[n - i - 1]);
}
int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        string res=a;
        reverseStr(res);
        // cout<<res<<endl;
        int n=a.size(),m=res.size();
        int lis[n+1][m+1];
        FOR(i,0,n){
            FOR(j, 0, m){
                if(i==0||j==0)
                    lis[i][j]=0;   
                else if(a[i-1]==res[j-1])
                    lis[i][j]=lis[i-1][j-1]+1;
                else lis[i][j]=max(lis[i-1][j],lis[i][j-1]);
            }
        }
        cout<<n-lis[n][m]<<endl;
    }
    return 0;
}
