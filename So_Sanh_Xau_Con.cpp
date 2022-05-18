#include<bits/stdc++.h>
using namespace std;
void process(){
    string s;
    cin>>s;
    long long a;
    cin>>a;
    long long DP[s.length()+5][26]={};
    for(int i=0;i<s.size()-1;i++){
        for(int j=0;j<25;j++){
            DP[i+1][j]=DP[i][j];
        }
        DP[i+1][s[i]-'a']++;
    }
    while(a--){
        long long x,y,m,n;
        
        cin>>x>>y>>m>>n;
        long long have=1;
        for(int i=0;i<25;i++){
            long long t=DP[y][i] - DP[x-1][i];
            long long u=DP[n][i] - DP[m-1][i];
            if(t!=u){
                have=0;
                break;
            }
        }
        have ? cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
main(){
    process();
}