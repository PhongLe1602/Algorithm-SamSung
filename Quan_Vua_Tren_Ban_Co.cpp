// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int n;cin>>n;
//     if(n==1)cout<<1;
//     if(n==4){
//         cout<<2<<" "<<4<<" "<<1<<" "<<3;
//         cout<<endl;
//         cout<<3<<" "<<1<<" "<<4<<" "<<2;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int n,a[1005],x[1005];
int xuoi[1005],nguoc[1005];
void Out(){
    for(int i=1;i<=n;i++)cout<<x[i]<<" ";
    cout<<endl;
}
void Track_Back(int i){
    for(int j=1;j<=n;j++){
        if(a[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
            x[i]=j;
            a[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
            if(i==n)Out();
            else Track_Back(i+1);
            a[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
        }
    }
}
main(){
    memset(a,1,sizeof(a));
    memset(xuoi,1,sizeof(xuoi));
    memset(nguoc,1,sizeof(nguoc));
    cin>>n;
    Track_Back(1);
}