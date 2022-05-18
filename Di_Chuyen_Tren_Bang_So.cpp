#include<bits/stdc++.h>
using namespace std;	
#define FOR(i, a, b) for(int i=a;i<=b;i++)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define BEGIN() int t;cin>>t;while(t--)
int n,m,a[100][100];
vector <string> res;
bool check[100][100];
int sum,MIN=INT_MAX;
void Try(int i,int j, int s){
	if(i==n && j==m){
        cout<<sum<<endl;
		MIN=min(MIN,sum);
		return;
	}
	if(i<n && check[i+1][j]==false){
		check[i][j]=true;// di duoc
		Try(i+1,j,sum+a[i][j]);
		check[i][j]=false;// danh dau lai de di len
	}
	if(j<m && check[i][j+1]==false){
		check[i][j]=true;// di duoc
		Try(i,j+1,sum+a[i][j]);
		check[i][j]=false;// danh dau lai de di sang trai
	}
	if(j>1&& check[i][j-1]==false){
		check[i][j]=true;// di duoc
		Try(i,j-1,sum+a[i][j]);
		check[i][j]=false;// danh dau lai de di sang phai
	}
	if(i>1&& check[i-1][j]==false){
		check[i][j]=true;// di duoc
		Try(i-1,j,sum+a[i][j]);
		check[i][j]=false;// danh dau lai de di xuong
	}
}

int main(){
    fast()
	BEGIN(){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				check[i][j]=false;
			}
		}
        sum=a[1][1];
		Try(1,1,sum);
        //cout<<MIN<<endl;
		// if(res.size()==0) cout<<-1;
		// else{
		// 	sort(res.begin(),res.end());
		// 	for(int i=0;i<res.size();i++)
		// 		cout<<res[i]<<" ";
		// }
		// cout<<endl;
	}
	return 0;
}