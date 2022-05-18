#include<bits/stdc++.h> 
using namespace std; 
int k;
bool findPartiion(int arr[], int n) {
    int sum = 0;
    int i, j;
 
   
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum < k)
        return false;
 
    bool part[k + 1];
 
    for (i = 0; i <= k; i++) {
        part[i] = 0;
    }
 
    for (i = 0; i < n; i++) {
        for (j = k; j >= arr[i]; j--) { 
            if (part[j - arr[i]] == 1 || j == arr[i])
                part[j] = 1;
        }
    }
    return part[k];
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>k;

        int a[n];
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        if(findPartiion(a,n)==0) {
            cout<<"NO";
            
        }
        else cout<<"YES";
        
        cout<<endl;
    }
}
