#include <bits/stdc++.h>
using namespace std;
int n, a[100];

void generate(int a[]) {
	string s="";
	for (int i=1; i<=n; i++)
		s+=i+'0';
    for(int i=1;i<=n;i++){
        cout<<a[s[i-1]-'0']<<" ";
    }
	while (next_permutation(s.begin(), s.end())){
        for(int i=1;i<=n;i++){
            cout<<a[s[i-1]-'0']<<" ";
        }
        cout<<endl;
    }
}

main() {
	cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    generate(a);
}
// #include<bits/stdc++.h>
// using namespace std;
// int n,ok,a[10005],b[10005];
// void init(){
//     for(int i=1;i<=n;i++)a[i]=i;
// }
// void next(){
//     int i=n-1;
//     while(i>=1&&a[i]>a[i+1])i--;
//     if(i==0) ok=0;
//     int j=n;
//     while(a[i]>a[j])j--;
//     swap(a[i],a[j]);
//     sort(a+i+1,a+n+1);
// }
// main(){
//     cin>>n;
//     for(int i=1;i<=n;i++)cin>>b[i];
//     sort(b+1,b+n+1);
//     ok=1;
//     init();
//     while(ok){
//         for(int i=1;i<=n;i++){
//             cout<<b[a[i]]<<" ";
//         }
//         cout<<endl;
//         next();
//     }
// }