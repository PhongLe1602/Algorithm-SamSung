#include<bits/stdc++.h>
using namespace std;
#define Nothing					"mikey"
#define Nothing					"mikey"
#define Nothing					"mikey"
#define Nothing					"mikey"
#define Nothing					"mikey"
#define run() int t;cin>>t;while(t--)
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,l,r) for(int i=l;i>=r;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

int test(int *a,int n){
    int dpdecrease[n];
    int dpincrease[n];
    dpincrease[0]=1;
    FOR(i,1,n-1)
        dpincrease[i]=(a[i] > a[i-1]) ? dpincrease[i-1]+1 : 1;
    dpdecrease[n-1]=1;
    FORD(i,n-2,0)
        dpdecrease[i]=(a[i] > a[i+1]) ? dpdecrease[i+1]+1 : 1;
    int Max=0;
    FOR(i,0,n-1)
        Max=max(dpdecrease[i]+dpincrease[i]-1,Max);
    return Max;
}
main(){
    faster()
    run(){
        int n;
        cin>>n;
        int a[n];
        FOR(i,0,n-1) 
            cin>>a[i];
        cout<<test(a,n)<<"\n";
    }
    return EXIT_SUCCESS;
}
