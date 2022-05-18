#include<bits/stdc++.h>
using namespace std;
int n,x[10005]={},x2[10005]={0},x3[100005]={0};
int x4[10005]={0},x5[10005]={0};
vector<string>test;
void out1(){
	string f="";
	for(int i=0;i<n;i++){
		char z=x2[i]+'A';
		f+=z;
	}
	int t1,t3,t2=0;
	t1=pow(2,n);t3=t1;
	while(t1--){
		cout<<f<<test[t2]<<endl;
		t2++;
	}
}
void Try_hv(int i){
	for(int j=0;j<n;j++){
		if(x3[j]==0){
			x2[i]=j;
			x3[j]=1;
			if(i==n-1) out1();
			else Try_hv(i+1);
			x3[j]=0;
		}
	}
}
void out2(){
	string g="";
	for(int i=1;i<=n;i++){
		char z=x4[i]+'0';
		g+=z;
	}
	test.push_back(g);
}
void Try_hv1(int i){
	for(int j=1;j<=n;j++){
		if(x5[j]==0){
			x4[i]=j;
			x5[j]=1;
			if(i==n) out2();
			else Try_hv1(i+1);
			x5[j]=0;
		}
	}
}
main(){
	cin>>n;
	if(n==1){
		string e3="A1";
		cout<<e3;
	}else{
		string e1="",e2="";
		for(int i=0;i<n;i++){
			e1+=1+'0';
			e2+=n+'0';
		}
		test.push_back(e1);
		Try_hv1(1);
		test.push_back(e2);
		Try_hv(0);
	}
}