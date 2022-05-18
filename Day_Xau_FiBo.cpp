#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
long long f[100];
void mi(){
    f[1]=1;
    f[2]=1;
    for(int i=3;i<100;i++){
        f[i]=f[i-2]+f[i-1];
    }
}
string d(ll n,ll k){
    if(n==1) return "A";
    else if(n==2) return "B";
    else if(k>f[n-2]) return d(n-1,k-f[n-2]);
    else return d(n-2,k);
}
int main(){
    int t;
    mi();
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<d(n,k);
        cout<<endl;
    }
}
