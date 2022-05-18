#include<bits/stdc++.h>
using namespace std;
int ok,n;
void sinh(int a[],int n){
    int i=n-1;
    while(i>=0&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==-1) ok=0;
    else a[i]=1;
}
main(){
    int t;cin>>t;
    while(t--){
        multiset<string>mu;
        mu.clear();
        string s;
        cin>>n>>s;
        int k=s.size();
        ok=1;
        int a[k+3]={0};
        while(ok){
            string s1="";
            for(int i=0;i<k;i++){
                if(a[i]==1){
                    s1+=s[i];
                }
            }
            if(s1!=""){
                mu.insert(s1);
            }
            sinh(a,k);
        }
        for(auto i:mu){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}