#include<bits/stdc++.h>
using namespace std;
int n,m,q,tree[1000005]={0},f[1000005]={0},g[1000005];
void builTree(int id,int l,int r){
	if(l==r){
		tree[id]=f[l];
		return;
	}
	int m=(l+r)/2;
	builTree(id*2,l,m);
	builTree(id*2+1,m+1,r);
	tree[id]=max(tree[id*2],tree[id*2+1]);
}
void updateTree(int id,int l,int r,int u,int v,int val){
	if(u>r||v<l) return;
	if(l==r){
		tree[id]+=val;
		return;
	}
	int m=(l+r)/2;
	updateTree(id*2,l,m,u,v,val);
	updateTree(id*2+1,m+1,r,u,v,val);
	tree[id]=max(tree[id*2],tree[id*2+1]);
}
int getVal(int id,int l,int r,int u,int v){
	if(u>r||v<l) return INT_MIN;
	if(l==r) return tree[id];
	int m = (l+r)/2;
	return max(getVal(id*2,l,m,u,v),getVal(id*2+1,m+1,r,u,v));
}
main(){
	cin>>n>>m;
	builTree(1,1,n);
	while(m--){
		int l,r,v;
		cin>>l>>r>>v;
		updateTree(1,1,n,l,r,v);
	}
	cin>>q;
	while(q--){
		int u,v;
		cin>>u>>v;
		cout<<getVal(1,1,n,u,v)<<endl;
	}
	
}