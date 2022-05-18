/*quy lui sinh xau nhi phan */
#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void out(){
   for(int i=0;i<n;i++)cout<<s[i];
   cout<<endl;
}
void Track_Back(int i){
   for(int j=0;j<=1;j++){
       s[i]=j+'0';
       if(i==n-1)out();
       else Track_Back(i+1);
   }
}
main(){
   int t;
   cin>>t;
   while(t--){
       cin>>n;
       s="";
       Track_Back(0);
   }
}
#include<bits/stdc++.h>
using namespace std;
int ok;
void sinh(int a[],int n){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ok=1;
		int a[n+3]={0};
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh(a,n);
		}
		cout<<endl;
        deque<int>d;
	}
}
/* Quy Lui To Hop Chap K */

#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void out(){
    for(int i=1;i<=k;i++)cout<<a[i]<<" ";
    cout<<endl;
}
void Back_Track(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k)out();
        else Back_Track(i+1);
    }
}
main(){
    cin>>k>>n;
    Back_Track(1);
}

#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
 
int n,k,a[100],ok;
 
void init(){
	FOR(i,1,k+1){
		a[i]=i;
	}

void next(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0) ok=false;
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
}
 
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		ok=true;
		while(ok){
			FOR(i,1,k+1){
				cout<<a[i];
			}
			cout<<' ';
			next();
		}
		cout<<"\n";
	}
}


/* liet ke hoan vi */

#include<bits/stdc++.h>
using namespace std;
int n,ok,a[10005];
void init(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void next(){
    int i=n-1;
    while(i>=1&&a[i]>a[i+1]) i--;
    if(i==0) ok = 0;
    int j=n;
    while(a[i]>a[j])j--;
    swap(a[i],a[j]);
    sort(a+i+1,a+n+1);
}
main(){
    int t;
    rev
    cin>>t;
    while(t--){
        cin>>n;
        ok=1;
        init();
        while(ok){
            for(int i=1;i<=n;i++)cout<<a[i];
            cout<<" ";
            next();
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
bool ckeck[1005];
void out(){
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
void back_track(int i){
   for(int j=1;j<=n;j++){
        if(ckeck[j]==false){
            a[i]=j;
            ckeck[j]=true;
            if(i==n)out();
            else back_track(i+1);
            ckeck[j]=false;
        }
   }
}
main(){
    cin>>n;
    pair<int,int> p;
    p
    memset(ckeck,false,1005);
    back_track(1);
}