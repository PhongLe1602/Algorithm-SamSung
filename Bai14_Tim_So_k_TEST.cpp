#include<bits/stdc++.h>
using namespace std;
string k="543210";
main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long dem=0;
        for(int i=l;i<=r;i++){
           string k1=to_string(i);
           if(i>543210) break;
           else{
                bool ok=true;
                int b[256]={0};
                for(int j=0;j<k1.size();j++){
                   int x=k1[j]-'0';
                   b[k1[j]]++; 
                   if(b[k1[j]]>1||x>=6) {
                       ok=false;
                       break;
                   }
                }
                if(ok==true) dem++;
           }
        }
        cout<<dem<<endl;
    }
}