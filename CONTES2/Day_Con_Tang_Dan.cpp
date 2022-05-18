#include<bits/stdc++.h>
using namespace std;
long a[1005]={0},b[1005]={0},c[1005]={0},d[1005]={0};
long n,k;
set<string>mu;
void ktra(){
    long dem=0;
    string x="";
    for(int i=0;i<k;i++){
    	if(a[i]==1){
            x+=to_string(c[i]);
            x+=" ";
            dem++;
        }
    }
    if(dem>1)mu.insert(x);
}
void back_track(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==k-1) ktra();
        else back_track(i+1);
    }
}
main(){
    cin>>n;
    b[n];
    for(int i=0;i<n;i++)cin>>b[i];
    for(long i=0;i<n-1;i++){
        c[n]={};
        k=0;
        c[k++]=b[i];
        for(long j=i+1;j<n;j++){
           if(b[j]>b[i]){
                c[k++]=b[j];
           }
        }
        a[1005]={0};
        if(k>1){
            back_track(0);
        }
        //break;
    }
    for(auto i:mu){
        cout<<i<<endl;
    }
}