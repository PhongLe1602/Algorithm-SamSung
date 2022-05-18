#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
main(){
    string s;
    int n,a,b,c,d,l1=0;
    cin>>s>>n;
    long long A[1005]={0};
    for(int i=0;i<s.size();i++){
        int x=0;
        if(i==0){
            A[i]=(int)(s[i]-'a');
        }else{
            A[i]=A[i-1]+(int)(s[i]-'a');
        }
    }
    //cout<<A[2]-A[0];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        for(int i=0;i<s.size();i++){
            cout<<"A["<<i<<"] = "<<A[i]<<endl;
        }
        long long x=0,y=0;
        x=A[b-1]-A[a-1];y=A[d-1]-A[c-1];
        cout<<x<<" "<<y;
        break;
        // if(x!=y)cout<<"NO\n";
        // else cout<<"YES\n";
    }
}