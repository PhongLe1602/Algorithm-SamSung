#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		scanf("\n");
		string s;
		getline(cin,s);
		int a = s[5]-'0';
		int b = s[6]-'0';
		int c = s[7]-'0';
		int d = s[9]-'0';
		int e = s[10]-'0';
		int ok = 0;
		if(a<b&&b<c&&c<d&&d<e){
			ok = 1;
		}else if(a==b&&a==c){
			if(d==e) ok = 1;
			else ok = 0;
		}else if((a==6||a==8)&&(b==6||b==8)&&
		(c==6||c==8)&&(d==6||d==8)&&(e==6||e==8)){
			ok = 1;
		}else ok = 0;
		if(ok==1) cout <<"YES\n";
		else cout <<"NO\n";
	}
}