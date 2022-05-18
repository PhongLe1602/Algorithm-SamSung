#include<bits/stdc++.h>
using namespace std;	
#define FOR(i, a, b) for(int i=a;i<=b;i++)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define BEGIN() int t;cin>>t;while(t--)
int n,a[100][100];
vector <string> res;
bool check[100][100];

void Try(int i,int j, string s){
	if(a[1][1]==0 || a[n][n]==0){// 0 co duong di
		return;
	}
	if(i==n && j==n){
		res.push_back(s);
		return;
	}
	if(i<n && a[i+1][j]==1 && check[i+1][j]==false){
		check[i][j]=true;// di duoc
		Try(i+1,j,s+"D");
		check[i][j]=false;// danh dau lai de di len
	}
	if(j<n && a[i][j+1]==1 && check[i][j+1]==false){
		check[i][j]=true;// di duoc
		Try(i,j+1,s+"R");
		check[i][j]=false;// danh dau lai de di sang trai
	}
	if(j>1 && a[i][j-1]==1 && check[i][j-1]==false){
		check[i][j]=true;// di duoc
		Try(i,j-1,s+"L");
		check[i][j]=false;// danh dau lai de di sang phai
	}
	if(i>1 && a[i-1][j]==1 && check[i-1][j]==false){
		check[i][j]=true;// di duoc
		Try(i-1,j,s+"U");
		check[i][j]=false;// danh dau lai de di xuong
	}
}

int main(){
    fast()
	BEGIN(){
		res.clear();
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				check[i][j]=false;
			}
		}
		Try(1,1,"");
		if(res.size()==0) cout<<-1;
		else{
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++)
				cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
