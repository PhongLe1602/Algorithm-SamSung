#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m=0;string s;
    cin>>s>>n;
    m=s[0]-'A';
    //cout<<m;
    for(int i=0;i<=m;i++){
       char x=i+65;
       int x1=i;
       while(x1<=m){
           char x2;
           x2=x1+65;
           cout<<x;
           for(int i=0;i<n-1;i++){
               cout<<x2;
           }
           x1++;
           cout<<endl;
       }
    }
}