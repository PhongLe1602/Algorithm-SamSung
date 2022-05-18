#include<bits/stdc++.h>
using namespace std;
int ok,n;
void sinh(int a[],int n){
	int i=n;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==-1) ok=0;
	else a[i]=1;
}
bool ktra(int n){
    if(n<2) return false;
    if(n>2){
        if(n%2==0) return false;
    }
    if(n==2) return true;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
main(){
    int t,l1=0;
    cin>>t;
    int a[10005]={0},b[10005]={0};
    a[0]=a[1]=1;
    for(int i=2;i<=sqrt(10000);i++){
        if(a[i]==0){
            for(int j=i*i;j<=10000;j+=i){
                a[j]=1;
            }
        }
    }
    // for(int i=0;i<=10000;i++){
    //     if(a[i]==0) b[l1++]=i;
    // }
    while(t--){
        cin>>n;
        int k[n+3]={0},k1[n];
        for(auto &i:k1)cin>>i;
        sort(k1,k1+n,greater<int>());
        ok=1;
        while(ok){
            int sum=0;
            for(int i=0;i<n;i++){
                if(k[i]==1) sum+=k1[i];
            }
            if(a[sum]==0){
                for(int i=0;i<n;i++){
                    if(k[i]==1){
                        cout<<k1[i]<<" ";
                    }
                }
                cout<<endl;
            }
            sinh(k,n-1);
        }
    }
}