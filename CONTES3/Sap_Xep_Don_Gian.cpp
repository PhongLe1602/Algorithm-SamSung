#include<bits/stdc++.h>
#define FOR(i, m, n)    for(int i = m; i <= n; ++i)
using namespace std;
struct pai{
    int x,y;
};

bool cmp(pai a,pai b) {
    if(a.x==b.x)
        return a.y < b.y;
    return a.x < b.x;
}

main() {
    int n;
    cin >> n;
    pai a[n];
    for(int i = 0;i < n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    sort (a,a + n, cmp);
    int cnt = 1,ans = 0;
    //tìm do?n tang d?n dài nh?t 
    FOR(i,1,n-1){
        if(a[i].y > a[i - 1].y){
            cnt++;
        }
        else {
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    ans = max(ans,cnt);
    cout<<n-ans;
}
