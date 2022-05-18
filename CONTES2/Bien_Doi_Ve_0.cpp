// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n==0){
//             cout<<9<<endl;
//             continue;
//         }
//         long long k=9,dem=1;
//         n--;
//         if(n!=0){
//             k=10;
//             n--;
//             while(n>=10){
//                 string gg=to_string(k);
//                 int x1=gg[0]-'0',x2=0,x3;
//                 x2=10/x1;x3=k/10;x3=x3*10+10;

//             }
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long k=0;
        if(n==0){
            cout<<0<<endl;
            continue;
        }
		if(n==1){
			cout<<9<<endl;
			continue;
		}
		if(n>1){
			k=10;
			n-=2;
			while(n!=0){
				string x=to_string(k);
				int x1=x[0]-'0',x2=k/10;
                x2=x2*10+10;
                string xx=to_string(x2);
                int xx1=xx[0]-'0';
                if(x2-k==xx1){
                    k=x2;
                    n--;
                    continue;
                }
				k+=x1;
				n--;
			}
			cout<<k<<endl;
		}
	}
}