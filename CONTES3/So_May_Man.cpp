#include<bits/stdc++.h>
using namespace std;
long long x[1000005];
vector<long long>a;
long long n,k,l1=0,h1=9,p,q,sum=0;
void reset(){
	string m="";
	for(int i=1;i<=k;i++){
		if(x[i]==1) m+='7';
		else m+='4';
	}
	long long z=stoll(m);
	a.push_back(z);
}
void Back_Tracking(int i){
	for(int j=0;j<2;j++){
		x[i]=j;
		if(i==k) reset();
		else Back_Tracking(i+1);
	}
}
main(){
	while(h1>=1){
		k=h1;
		x[h1]={0};
		Back_Tracking(1);
		h1--;
	}
	sort(a.begin(),a.end());
	cin>>p>>q;
	long long it= lower_bound(a.begin(),a.end(),p)-a.begin();
	for(long long i=p;i<=q;i++){
		if(i>a[it]){
			it= lower_bound(a.begin(),a.end(),i)-a.begin();
			sum+=a[it];
		}else{
			sum+=a[it];
		}
	}
	cout<<sum<<endl;
}