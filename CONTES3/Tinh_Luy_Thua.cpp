// #include<bits/stdc++.h>
// using namespace std;
// long long mod=pow(10,9)+7;
// long long Bin_Pow(long long a,long long b){
//     if(b==0)return 1;
//     long long x=Bin_Pow(a,b/2);
//     if(b%2==1) return (a%mod*x%mod*x%mod)%mod;
//     else return (x%mod*x%mod)%mod;
// }
// main(){
//     int t=20;
//     while(t--){
//         long long n,m;
//         cin>>n>>m;
//         if(n==0&&m==0)break;
//         else cout<<Bin_Pow(n,m)<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
long long Bynerry(long long a,long long b,long long c){
	if(b==0)return 1;
	long long x=Bynerry(a,b/2,c);
	if(b%2==0) return (x%c*x%c)%c;
	else return (a%c*x%c*x%c)%c;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<Bynerry(a,b,c)<<endl;
	}
}