#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[55]={0},b[55]={0};
multiset<string>se;
bool cmp(int a[]){
    for(int i=1;i<k;i++){
        if(b[a[i]]>b[a[i+1]]) return false;
    }
    return true;
}
void Test(){
    string x="";
    for(int i=1;i<=k;i++){
        x+=to_string(b[a[i]]);
        x+=" ";
    }
    se.insert(x);
}
void Back_Track(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            if(cmp(a)) Test();
        }else Back_Track(i+1);
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
    for(k=2;k<=n;k++){
        Back_Track(1);
    }
    for(auto it:se)cout<<(it)<<endl;
}