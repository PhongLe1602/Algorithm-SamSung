#include<bits/stdc++.h>
#define run() int t;cin>>t;cin.ignore();while(t--)
#define ll long long
#define endl "\n"
#define FOR(i,l,r) for(int i=l;i<=r;i++)


using namespace std;
void GreyCode(int n) {
    for (int i = 0; i < (1 << n); i++) 
    {
        
        int val = (i ^ (i >> 1));

        bitset<32> r(val);

        string s = r.to_string();
        cout << s.substr(32 - n) << " ";
    }
}
int main(){
    run(){  
        int n;
        cin>>n;
        GreyCode(n);
        cout<<endl;
    }
}
