/*
                     .:*+=%@@@@@@=-.
                 .:=@#@@@#@@#######%==*.
              .-=####@######%*-.....:%##%.
            .*@###########%+:--........-%@-
          .*@##############@+--.........-:%-
        .+##################@==%%%%=+*:----+.
      .-@####################%++%@@@@@=+**%@@*
      .%###################@%%@@@###@%+:--%@@%.
     -@###################@%%%%*::*%++:-----=@+.
    -#####################@%=++++++*:-------.-=:
   .+####################@%++*::-:::--::*:::***=:
   .@#####################%=++*::::-:::++*=##@@#@-
  ..#####################@%%=++**:::::**+%@#@%%##-..
   .%####################@@%=+++*+****::*=@######@.
  .=######################@%%==+==++**+=@%@##@###+:...
  -#######################@@@%%%===++=@@@%=++===*::--...
  -########################@@@@@@@%==%%=++==@@:::::*:--.
..:#########################@@@@@@%%======++++::-..:-.--...
%#############################@###@%%@@%==%=%*----.--.::---.
#############################################*-:*:-:---*---- .
#############################################*--*--:---*---:-.
#############################################+--::--::-*::-::.
###########################################+:*-.---.---.:---*-..
###########################################**:-----------------.
##########################################@::**:--::::::--:::::-
###########################################:--:*:::::::::**::*+*
###########################################=:::***::::::**:::*+*
############################@@@@@@#########@+****::::********+++
############################@%%%%%@@@@@@@###%+***::::::::***+==+
############################@%%%%%%%%%%%@####=+:::-::::-::*+=%%+
#############################@%%%%%%%%%%@#####=::--------:*=%@%+
%###########################@%%%%==%%%%%%@##@#=:------..-:+%@@%=
----------------------------------------------
--------------------------------------------
----------------------------------------------
--------------------------------------------
----------------------------------------------

         o###########oo
      o##"          ""##o
    o#"                "##
  o#"                    "#o
 #"  ##              ##   "##
#"                          ##
#  ###################       #
#                            #
#                            #
#                            #
#                            #
#                            #
#                            #
#o                           #
"#o                         ##
 "#o                       ##
  "#o                    o#"
   "#o                  ##
     "#o              o#"
       "#ooo      ooo#######oo
        ###############   "######o
     o###""        "###o      # ###
   o###o     oooo    ###    oo####"
 o###**#     #**#   ############"
 ""##""""""""""###########    #
    # oooooooo#"#**     ##    #
    # #       # # **    ##    #
    #o#       #o#  *****###ooo#
                        ##
                        ##   o###o
                        ## o##***##
               o########## #***#**##o
             o##"   ""###  #***##***#
 o#######o  ###   oo####   ##**####*#
o##"  ""#############""     ##****###
##"         ##              ##*##*###
##          ###              ##### ##
##           ###              # ##  #
##            ##                 #
##             ##
##             ###
##              ###oo
###              ""###
 ###
  ###
*/
/**********************************************
              well come to LVP
***********************************************/
// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t;cin>>t;
//     while(t--){
//         int n,m,dem=0,d=0;
//         cin>>n>>m;
//         int a[n][m]={0},b[n*m+1]={0};
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>a[i][j];
//             }
//         }
//         while(dem<m*n){
//             for(int i=d;i<m-d;i++) b[dem++]=a[d][i];
//             if(dem>=m*n) break;
//             for(int i=d+1;i<n-d;i++) b[dem++]=a[i][m-d-1];
//             if(dem>=m*n) break;
//             for(int i=m-d-2;i>=d;i--) b[dem++]=a[n-d-1][i];
//             if(dem>=m*n) break;
//             for(int i=n-d-2;i>d;i--) b[dem++]=a[i][d];
//             if(dem>=m*n) break;
//             ++d;
//         }
//         for(int i=0;i < dem;i++) cout<<b[i]<<" ";
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define run() int t;cin>>t;while(t--)
// main(){
//      run(){
//           int n,m;
//           cin>>n>>m;
//           int a[n][m],b[m*n+1];
//           for(int i=0;i<n;i++){
//                for(int j=0;j<m;j++){
//                     cin>>a[i][j];
//                }
//           }
//           int hang=n-1,cot=m-1,h=n*m,d=0,l1=0;
//           while(d<=n/2){
//                for(int i=d;i<=cot;i++) b[l1++]=a[d][i];
//                if(l1==h) break;
//                for(int i=d+1;i<=hang;i++) b[l1++]=a[i][cot];
//                if(l1==h) break;
//                for(int i=cot-1;i>=d;i--) b[l1++]=a[hang][i];
//                if(l1==h) break;
//                for(int i=hang-1;i>d;i--) b[l1++]=a[i][d];
//                if(l1==h) break;
//                d++,hang--,cot--;
//           }
//           for(int i=0;<l1;i++){
//                cout<<b[i]<<" ";
//           }
//           cout<<endl;
//      }
// }
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// struct PhanSo{
//     ll tu,mau;
// };
// ll gcd(ll x,ll y){
//     ll tmp;
//     while(y){
//         tmp=x%y;
//         x=y;
//         y=tmp;
//     }
//     return x;
// }
// void nhap(struct PhanSo &x){
//     cin>>x.tu>>x.mau;
// }
// void rutgon( struct PhanSo &x){
//     ll g=gcd(x.tu,x.mau);
//     x.tu/=g;
//     x.mau/=g;

// }
// void in(struct PhanSo x){
//     cout<<x.tu<<"/"<<x.mau;
// }
// int main(){
//     struct PhanSo p;
//     nhap(p);
//     rutgon(p);
//     in(p);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t;cin>>t;
//     while(t--){
//         int n,k;cin>>n>>k;
//         int a[n];
//         for(auto &i:a) cin>>i;
//         sort(a,a+n,greater<int>());
//         for(int i=0;i<k;i++)cout<<a[i]<<" ";
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// struct ThiSinh{
//     string name,ns;
//     float d1,d2,d3,d;
// };
// void nhap(struct ThiSinh &a){
//     scanf("\n");
//     getline(cin,a.name);
//     cin>>a.ns;
//     cin>>a.d1>>a.d2>>a.d3;
//     a.d=a.d1+a.d2+a.d3;
// }
// void in(struct ThiSinh a){
//     cout<<a.name<<" "<<a.ns<<" "<<setprecision(1)<<fixed<<a.d;
// }
// int main(){
//     struct ThiSinh A;
//     nhap(A);
//     in(A);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,i,j,k,end=0;
//         cin>>n;
//         long long a[n];
//         long long b[100005]={0};
//         for(auto &i:a){
//           cin>>i;
//           b[i]=1;
//         }
//         sort(a,a+n);
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 long long s = a[i]*a[i] + a[j]*a[j];
//                 long long kt=(long long)sqrt(s);
//                 if(kt*kt==s&&b[kt]==1){
//                     //for(int k=j+1;k<n;k++){
//                         //if(s==a[k]*a[k]){
//                             end=1;
//                             cout<<"YES\n";
//                             break;
//                        // }
//                     //}
//                 }
//                 if(end==1) break;
//             }
//         }
//         if(end==0) cout<<"NO\n";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     string s1,s2;
//     getline(cin,s1);
//     cin>>s2;
//     while(s1.find(s2)!=-1){
//         s1.erase(s1.find(s2),s2.size());
//     }
//     cout<<s1;
// }
#include<bits/stdc++.h>
using namespace std;
long long Doan_Xem(string str,int n){
    int len = str.size();
    long long dp[len][n];
    memset(dp,0,sizeof(dp));
    // gia tri cho chu so dau tien
    dp[0][(str[0]-'0')%n]++;
    for(int i=1;i<len;i++){
        // bat dau voi mot day con voi chi muc moi
        dp[i][(str[i]-'0')%n]++;
        for(int j=0;j<n;j++){
            dp[i][j]+=dp[i-1][j];
            dp[i][(j*10+(str[i]-'0'))%n]+=dp[i-1][j];
        }
    }
    return dp[len-1][0];
}
main(){
    int t;cin>>t;
    while(t--){
        string str="";
        int n=3,k;
        cin>>k;
        cin>>str;
        cout<<Doan_Xem(str,n)<<endl;
    }
}
// #include <bits/stdc++.h>
// #include <fstream>
// using namespace std;
// main(){
//     ifstream file1; 
//     ofstream file2;
//     file1.open("PTIT.in");
//     file2.open("PTIT.out");
//     while(file1.eof()==0){
//         string a;
//         getline(file1,a);
//         file2<<a<<endl;
//     }
//     file1.close();
//     file2.close();
// }