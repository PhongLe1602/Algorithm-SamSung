#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++){
			cin>>b[i];
			a[i]=i;
		}
		sort(b+1,b+n+1);
		while(1){
			for(int i=1;i<=k;i++) cout<<b[a[i]]<<" ";
			cout<<endl;
			int ok=0;
			for(int i=k;i>=1;i--){
				if(a[i]!=n-k+i){
					ok=1;
					a[i]++;
					for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
					break;
				}
			}
			if(ok==0) break;
		}
	}
}