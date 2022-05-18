#include<bits/stdc++.h>
using namespace std;//T?ng dãy con = K
long long b[100],a[100],n,m=0,k,dem=0;
long long kk=INT_MAX;
void res(){
    dem=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            dem++;
            sum+=a[i];
        }
    }
    if(sum==k){
       kk=min(kk,dem);
    }
}
void Try(int i){
    for(int j=1;j>=0;j--){
        b[i]=j;
        if(i==n-1) res();
        else Try(i+1);
    }
}
int main(){
	cin>>n>>k;
	m=0;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
    
	Try(0);
    cout<<kk;
}