#include <iostream>
#include <vector>
using namespace std;

int n;
int a[10][10];
int I[2]={1, 0};
int J[2]={0, 1};
vector <char> b;
bool mark = false;

void nhap() {
	mark = false;
	b.clear();
	cin >> n;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++) cin >> a[i][j];
}

void xuat() {
	mark = true;
	for (int i=0; i<b.size(); i++) cout << b[i];
	cout << " ";
}

int check(int i, int j) {
	return (i>=0 && i<n && j>=0 && j<n && a[i][j]);
}

void Try(int i, int j) {
	int inext, jnext;
	for (int k=0; k<2; k++) {
		inext=i+I[k];
		jnext=j+J[k];
		if(check(inext, jnext)) {
			if(k==0) b.push_back('D');
			else b.push_back('R');
			if(inext==n-1 && jnext==n-1) xuat();
			else Try(inext, jnext);
			b.pop_back();
		}
	}
}

int main () {
	int test; cin >> test;
	while(test--) {
		nhap();
		if(a[0][0]==0) cout << -1;
		else {
			Try(0, 0);
			if(!mark) cout << -1;
		}
		cout << endl;
	}
	return 0;
}
