#include<bits/stdc++.h>
using namespace std;
int ok;
void xuat(string s){
    if(ok==-1){
        for(int i=0;i<s.size();i++){
            cout<<0;
        }
    }else{
        cout<<s;
    }
    
}
void sinh(string a,int n){
	int i=n;
	while(i>=0&&a[i]=='1'){
		a[i]='0';
		i--;
	}
	if(i==-1) ok=0;
	else a[i]='1';
    xuat(a);
}

main(){
	int t;
	cin>>t;
	while(t--){
        ok=1;
        string s;
        cin>>s;
        sinh(s,s.size()-1);
        cout<<endl;
	}
}