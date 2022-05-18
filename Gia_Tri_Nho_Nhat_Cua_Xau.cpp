#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long long k,l1=0,dem=0;
        string s;
        cin>>k>>s;
        long long b[256]={0},a[256]={0};
        multiset<int>se;
        long long sum=0;
        for(int i=0;i<s.size();i++){
            b[s[i]]++;
        }
        for(int i=65;i<=90;i++){
            if(b[i]>0){
                se.insert(b[i]);
                a[l1++]=b[i];
                dem+=b[i];
            }
        }
        if(k>=dem)cout<<0<<endl;
        else{
            sort(a,a+l1);
            while(k!=0){
                a[l1-1]--;
                sort(a,a+l1);
                k--;
            }
            for(int i=0;i<l1;i++){
                if(a[i]>=1){
                    sum+=pow(a[i],2);
                } 
                //cout<<a[i]<<endl;
            }
            cout<<sum<<endl;
        }
    }
}