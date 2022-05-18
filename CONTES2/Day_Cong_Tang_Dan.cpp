// #include<bits/stdc++.h>
// using namespace std;
// int ok;
// void sinh(int a[],int n){
// 	int i=n;
// 	while(i>0&&a[i]==1){
// 		a[i]=0;
// 		i--;
// 	}
// 	if(i==0) ok=0;
// 	else a[i]=1;
// }

// main(){
//     int n;
//     cin>>n;
//     ok=1;
//     int a[n];
//     int b[n+1]={0};
//     for(int i=0;i<n;i++)cin>>a[i];
//     sort(a,a+n);
//     multiset<string>mu;
//     while(ok){
//         int dem=0;
//         string s="";
//         for(int i=1;i<=n;i++){
//             if(b[i]==1){
//                 dem++;
//                 s+=to_string(a[i-1]);
//                 s+=" ";
//             }
//         }
//         if(dem>2){
//             mu.insert(s);
//         }
//         sinh(b,n);
//     }
//     for(auto i:mu){
//         cout<<i<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)cin>>i;
    multiset<string>mu;
    
}