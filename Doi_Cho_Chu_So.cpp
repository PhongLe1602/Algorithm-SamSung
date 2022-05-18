#include<bits/stdc++.h>

using namespace std;

#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,l,r) for (int i=l;i>=r;i--)
#define BEGIN() int t;cin>>t;while(t--)
#define FAST() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl "\n"
#define RESET(C) memset(C,0,sizeof(C))
const ll mod=1e9+7;
//
void findMaximumNum(string str, int k,string& max, int ctr){
    if (k == 0)
        return;
 
    int n = str.length();
 
    char maxm = str[ctr];
    for (int j = ctr + 1; j < n; j++) {
        if (maxm < str[j])
            maxm = str[j];
    }
 
    if (maxm != str[ctr])
        --k;
 
    for (int j = ctr; j < n; j++) {
        if (str[j] == maxm) {
            swap(str[ctr], str[j]);
 
            if (str.compare(max) > 0)
                max = str;
            findMaximumNum(str, k, max, ctr + 1);
            swap(str[ctr], str[j]);
        }
    }
}
int main(){
    FAST()
    BEGIN(){
        int k;
        string n;
        cin >> k >> n;
        string max=n;
        findMaximumNum(n,k,max,0);   
        cout<<max<<endl;
    }
}
