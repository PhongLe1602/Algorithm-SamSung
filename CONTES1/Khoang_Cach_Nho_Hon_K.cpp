#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		long long dem=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			int s=a[i]+k;
			int x=lower_bound(a,a+n,s)-a;
			int c=x-i-1;
			if(c>=1) dem+=c;
			
		}
		cout<<dem<<endl;
	}
}