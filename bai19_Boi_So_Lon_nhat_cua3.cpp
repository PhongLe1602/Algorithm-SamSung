// #include<bits/stdc++.h>
// using namespace std;
// int ok;
// void sinh(int a[],int n){
//     int i=n;
//     while(i>=1&&a[i]==1){
//         a[i]=0;
//         i--;
//     }
//     if(i==0) ok=0;
//     else a[i]=1;
// }
// main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         ok=1;
//         int a[n],b[n+3]={0};
//         for(auto &i:a) cin>>i;
//         sort(a,a+n,greater<int>());
//         string MAX="0";
//         while(ok){
//             string s="";
//             long long sum=0,dem=1;
//             for(int i=0;i<n;i++){
//                if(b[i+1]==1){
//                    dem*=10;
//                }
//             }
//             dem/=10;
//             for(int i=0;i<n;i++){
//                 if(b[i+1]==1){
//                     sum+=(a[i]*dem)%3;
//                     s+=(char)(a[i]+'0');
//                     dem/=10;
//                 }
//             }
//             //cout<<s<<endl;
//             // if(s=="981"){
//             //     cout<<sum<<endl;
//             // }
//             if(sum%3==0){
//                 MAX=max(MAX,s);
//             }
//             sinh(b,n);
//         }
//         if(MAX!="0") cout<<MAX<<endl;
//         else cout<<-1<<endl;
//     }
// }
// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;
 
// This function puts all elements of 3 queues in the auxiliary array
void populateAux(int aux[], queue<int> queue0, queue<int> queue1,
                 queue<int> queue2, int* top)
{
    // Put all items of first queue in aux[]
    while (!queue0.empty()) {
        aux[(*top)++] = queue0.front();
        queue0.pop();
    }
 
    // Put all items of second queue in aux[]
    while (!queue1.empty()) {
        aux[(*top)++] = queue1.front();
        queue1.pop();
    }
 
    // Put all items of third queue in aux[]
    while (!queue2.empty()) {
        aux[(*top)++] = queue2.front();
        queue2.pop();
    }
}
 
// The main function that finds the largest possible multiple of
// 3 that can be formed by arr[] elements
int findMaxMultupleOf3(int arr[], int size)
{
    // Step 1: sort the array in non-decreasing order
    sort(arr, arr + size);
 
    // Create 3 queues to store numbers with remainder 0, 1
    // and 2 respectively
    queue<int> queue0, queue1, queue2;
 
    // Step 2 and 3 get the sum of numbers and place them in
    // corresponding queues
    int i, sum;
    for (i = 0, sum = 0; i < size; ++i) {
        sum += arr[i];
        if ((arr[i] % 3) == 0)
            queue0.push(arr[i]);
        else if ((arr[i] % 3) == 1)
            queue1.push(arr[i]);
        else
            queue2.push(arr[i]);
    }
 
    // Step 4.2: The sum produces remainder 1
    if ((sum % 3) == 1) {
        // either remove one item from queue1
        if (!queue1.empty())
            queue1.pop();
 
        // or remove two items from queue2
        else {
            if (!queue2.empty())
                queue2.pop();
            else
                return 0;
 
            if (!queue2.empty())
                queue2.pop();
            else
                return 0;
        }
    }
 
    // Step 4.3: The sum produces remainder 2
    else if ((sum % 3) == 2) {
        // either remove one item from queue2
        if (!queue2.empty())
            queue2.pop();
 
        // or remove two items from queue1
        else {
            if (!queue1.empty())
                queue1.pop();
            else
                return 0;
 
            if (!queue1.empty())
                queue1.pop();
            else
                return 0;
        }
    }
 
    int aux[size], top = 0;
 
    // Empty all the queues into an auxiliary array.
    populateAux(aux, queue0, queue1, queue2, &top);
 
    // sort the array in non-increasing order
    sort(aux, aux + top, greater<int>());
 
    // print the result
    for (int i = 0; i < top; ++i)
        cout << aux[i];
 
    return top;
}
int main()
{
 
   int t;
   cin>>t;
   while(t--){
        int n;cin>>n;
        int arr[n];
        for(auto &i:arr)cin>>i;
        int size = sizeof(arr) / sizeof(arr[0]);
    
        if (findMaxMultupleOf3(arr, size) == 0)cout << "-1";
        cout<<endl;
   }
 
    return 0;
}