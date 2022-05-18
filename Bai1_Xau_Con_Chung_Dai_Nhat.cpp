#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        int dem=0;
        cin>>s1>>s2;
        if(s1<s2) swap(s1,s2);
        for(int i=0;i<s1.size();i++){
            if(s2.find(s1[i],0)!=-1){
                dem++;
                s2.erase(s2.find(s1[i],i),1);
            }
           // if(s2.size()==0) break;
        }
        cout<<dem<<endl;
    }
}