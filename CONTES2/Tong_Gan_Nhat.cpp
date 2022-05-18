// #include<bits/stdc++.h>
// using namespace std;
// long long a[105]={0},b[105]={0},n,z;
// long long MIN,MAX=0;
// void ktra(){
//     long long sum=0;
//     for(int i=1;i<=3;i++){
//         sum+=b[a[i]];
//     }
//     if(sum<=z){
//         MIN=max(MIN,sum);
//     }
// }
// void Track_Back(int i){
//     for(int j=a[i-1]+1;j<=n-3+i;j++){
//         a[i]=j;
//         if(i==3) ktra();
//         else Track_Back(i+1);
//     }
// }
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n>>z;
//         MIN=INT_MIN;
//         b[n+1]={};
//         for(int i=1;i<=n;i++){
//             cin>>b[i];
//         }
//         Track_Back(1);
//         cout<<MIN<<endl;
//     }
// }
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <deque>
#include <bitset>
#include <cctype>
#include <utility>
#include <cassert>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef unsigned long long ull;

#define Rep(i,n) for(int i = 0; i < (n); ++i)
#define Repd(i,n) for(int i = (n)-1; i >= 0; --i)
#define For(i,a,b) for(int i = (a); i <= (b); ++i)
#define Fit(i,v) For(__typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define Fitd(i,v) For(__typeof((v).rbegin()) i = (v).rbegin(); i != (v).rend(); ++i)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define ms(a,x) memset(a, x, sizeof(a))
const double PI = acos(-1.0);
const double eps = 1e-9;

const int inf = (int)1e9 + 5;
const ll linf = (ll)1e17 + 5;
int dr[4] = {-1, 0, +1, 0};
int dc[4] = {0, -1, 0, +1};
#define maxn 105

int n, a[maxn]={}, m;
#define Ford(i,a,b) for(int i = (a); i >= (b); --i)
int main(){
    int t;cin>>t;
    while(t--){
        cin >> n >> m;
        Rep(i, n) cin >> a[i];
        sort(a, a + n);
        int res = 0;
        Ford(i, n - 1, 2) {
            if(a[i] >= m) continue;
            int run = 0;
            Ford(j, i - 1, 0){
                if(j <= run) break;
                if(a[j] + a[run] + a[i] > m) continue;
                while(run + 1 < j && a[run + 1] + a[j] + a[i] <= m) run++;
                res = max(res, a[run] + a[j] + a[i]);
            }
        }
        cout << res<<endl;
    }
    return 0;
}
