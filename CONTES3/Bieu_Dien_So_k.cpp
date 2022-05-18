#include<bits/stdc++.h>
using namespace std;
#define run() int t;cin>>t;while(t--)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long 
#define endl "\n"
ll p = 1e9+7;

int main(){
	fast();
	run(){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i = 0;i < n; i++)
			cin>>a[i];
	
		ll dp[k+1]={0};
		dp[0] = 1;
		for(int i = 1;i <= k; i++)
			for(int j = 0;j < n; j++)
				if(i >= a[j])
					dp[i] = (dp[i] + dp[i-a[j]])%p;//s? cách v?i t?ng là i
		cout<<dp[k]<<endl;
	}
}
