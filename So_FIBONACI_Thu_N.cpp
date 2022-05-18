#include<bits/stdc++.h>
using namespace std;
long long k=pow(10,9)+7;
main(){
     unsigned long long a[1005]={};
     a[0]=0,a[1]=1;
     for(unsigned long long i=2;i<=1000;i++)a[i]=((a[i-1]%k)+(a[i-2]%k))%k;
    int t;
    cin>>t;
    while(t--){
          unsigned long long n;
          cin>>n;
          cout<<a[n]<<endl;
     }
}