#include<bits/stdc++.h>
using namespace std;
bool mi(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    if(sum%2!=0) return false;
    bool list[sum/2+1];
    for(int i=0;i<=sum/2;i++) list[i]=0;
    for(int i=0;i<n;i++)
        for(int j = sum/2;j >= a[i];j--)
            if(list[j-a[i]]==1||j==a[i])
                list[j]=1;
        
    return list[sum/2];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(mi(a,n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
