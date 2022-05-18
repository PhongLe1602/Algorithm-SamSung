#include<bits/stdc++.h>
using namespace std;
main(){
	string x1,x2;
	cin>>x1>>x2;
	for(char &i1:x1){
		if(i1=='6')i1='5';
	}
	for(char &i2:x2){
		if(i2=='6')i2='5';
	}
	cout<<stoll(x1)+stoll(x2)<<" ";
	for(char &i1:x1){
		if(i1=='5') i1='6';
	}
	for(char &i2:x2){
		if(i2=='5') i2='6';
	}
	cout<<stoll(x1)+stoll(x2);
}