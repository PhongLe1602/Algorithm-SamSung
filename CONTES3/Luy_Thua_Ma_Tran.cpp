#include <bits/stdc++.h> 
using namespace std;
#define mo 1000000007
int n;
long long a[10][10],A[10][10];
long long k;

void mul(long long a[10][10],long long b[10][10]){
	long long c[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]+=((a[i][k]%mo)*(b[k][j])%mo)%mo;
			} 
			c[i][j]%=mo;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=c[i][j];
		} 
	}		
}

void pow(long long a[10][10], long long n){	
	if(n<2) return;
    pow(a, n/2);
    mul(a,a);
	if(n%2==1) mul(a,A);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                A[i][j]=a[i][j];
            }
        }
        pow(a,k);
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
			cout<<endl;
        }
	}
	return 0;
}
/*
1
5 2
0 1 0 1 1
1 0 1 0 1
0 1 0 1 1
1 0 1 0 1
1 1 1 1 0
*/
/*
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
*/
