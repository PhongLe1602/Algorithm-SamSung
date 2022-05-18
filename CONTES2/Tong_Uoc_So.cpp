#include<bits/stdc++.h>
using namespace std;
main(){
//    long long a,b;
//    cin>>a>>b;
//    long long j=1,dem=0;
//    while(j<=b/4){
//        long long k1=1,k2=1;
//        k1=j*4;k2=j*10;
//        if(k1>=a&&k1<=b&&k1!=k2&&k1>10){
//            dem++;
//            cout<<k1<<endl;
//        }else if(k1>b) break;
//     //    if(k2>=a&&k2<=b&&k1!=k2&&k2>10){
//     //        dem++;
//     //        cout<<k2<<endl;
//     //    }
//        j++;
//    }
//    //cout<<dem<<endl;
int x=4,y=5,z=6;
    int k=__gcd(x,__gcd(y,z));
    cout<<k;
}