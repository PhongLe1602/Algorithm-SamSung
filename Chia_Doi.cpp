// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define FOR(i, m, n)    for(int i = m; i < n; ++i)
// // // #define FORx(i,m,n,x)   for(int i = m; i < n; i += x)
// // // #define FORD(i, m, n)   for(int i = m; i >= n; --i)
// // // #define get(C,a)        FOR(i, 0, a) cin >> C[i]
// // // #define print(C,a)      FOR(i, 0, a) cout << C[i]
// // // #define faster()        cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
// // // #define run()           int t; cin >> t; while (t--)

// // // int a[501][501];
// // // int n, m;
// // // int dx[5]={0,-1,1,0,0},
// // //     dy[5]={0,0,0,-1,1};

// // // struct point {
// // // 	int x, y, d;
// // // };

// // // int kt(int u, int v) {
// // // 	return u >= 1 && u <= n && v >= 1 && v <= m;
// // // }

// // // void solve(){
// // //     int n1 = 0, day;
// // // 	queue<point> q; 
// // //     cin >> n >> m;
// // // 	FOR(i, 1, n + 1) 
// // //         FOR(j, 1, m + 1) {
// // //             cin >> a[i][j];
// // //             if (a[i][j] == 2)
// // //                 q.push({i,j,0});
// // //             else if (a[i][j] == 1)
// // //                 n1++;
// // //     }

// // // 	while (!q.empty()) {
// // // 		point t = q.front(); q.pop();
// // // 	    if (q.empty()) 
// // //             day = t.d;

// // // 		FOR(i, 1, 5) {
// // //             int x = t.x + dx[i], y = t.y + dy[i];
// // // 			if (a[x][y] == 1 && kt(x,y)) {
// // // 				a[x][y] = 2;
// // //                 n1--;
// // // 				q.push({x, y, t.d + 1});
// // // 			}
// // // 		}
// // // 	}
// // //     if (n1) 
// // //         cout << -1 << endl;
// // //     else
// // //         cout << day << endl;
// // // }

// // // main() {
// // // 	faster();
// // //     run()   solve();
// // // 	return EXIT_SUCCESS;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int n,a[1005];
// // bool ok=true;
// // int dx(){
// //     for(int i=1;i<=n/2;i++){
// //         if(a[i]!=a[n-i-1]){
// //             return 0;
// //         }
// //     }
// //     return 1;
// // }
// // void skt(){
// //     int i=n;
// //     while(i > 0&&a[i]!=0){
// //         a[i]=0;
// //         i--;
// //     }
// //     if(i==0) ok =false;
// //     else a[i]=1;
// // }
// // main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int m;
// //         cin>>m;
// //         n=2;
// //         while(n<=m){
// //             for(int i=1;i<=n;i++){
// //                 a[i]=0;
// //             }
// //             while(ok){
// //                 if(dx()){
// //                     for(int i=1;i<=n;i++){
// //                         cout<<a[i];
// //                     }
// //                     cout<<" ";
// //                 }
// //                 skt();
// //             }
// //             ok=true;
// //             n*=2;
// //             cout<<endl;
// //         }
// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int k,n;
// int a[35];
// multiset<string>ve;
// void Out(){
//     int ok=1;
//     for(int i = 1;i<=k/2;i++){
//         if(a[i]!=a[k-i-1]){
//             ok=0;
//             break;
//         }
//     }
//     if(ok==1){
//         string s="";
//         for(int i=1;i<=k;i++){
//            cout<<a[i];
//         }
//         cout<<" ";
//     }
// }
// void Try(int i){
//     for(int j=0;j<=1;j++){
//         a[i]=j;
//         if(i==k) Out();
//         else Try(i+1);
//     }
// }
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin >> n;
//         for(k=2;k<=n;k++){
//             if(k%2==0)Try(1);
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int k,n;
int a[35];
multiset<string>ve;
void Out(){
    int ok=1;
    for(int i = 1;i<=k/2;i++){
        if(a[i]!=a[n-i-1]){
            ok=0;
            break;
        }
    }
    if(ok==1){
        string s="";
        for(int i=1;i<=k;i++){
            if(a[i]==0) s+='0';
            else s+='1';
        }
        ve.insert(s);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==k) Out();
        else Try(i+1);
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        for(k=2;k<=n;k+2){
            Try(1);
        }
        for(auto i:ve) cout<<i<<" ";
        cout<<endl;
    }
}