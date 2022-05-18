#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(auto &i:a){
        cin>>i;
        if(i>0){
            sum+=i;
        }
    }
    cout<<sum*2;
}