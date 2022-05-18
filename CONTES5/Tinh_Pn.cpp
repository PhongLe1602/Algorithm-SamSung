// #include<bits/stdc++.h>
// using namespace std;
// long long mod=1e9+7;
// long long permutationCoeff(long long n, long long k)
// {
// 	long long fact[n + 1]={0};

// 	fact[0] = 1;
// 	for(long long i = 1; i <= n; i++){
//         fact[i] = i%mod * fact[i - 1]%mod;
//         fact[i]%=mod;
//     }

// 	return (((fact[n]))/((fact[n - k])));
// }

// int main()
// {
//     int t;cin>>t;
//     while(t--){
//         long long n,k;
//         cin>>n>>k;
//         cout<< (permutationCoeff(n, k))<<endl;
//     }

// 	return 0;
// }
// A O(n) time and O(1) extra
// space solution to calculate
// the Permutation Coefficient
#include <iostream>
using namespace std;

long long mod=1e9+7;

int PermutationCoeff(int n, int k)
{
	long long P = 1;
	for (int i = 0; i < k; i++)
		P *= (n-i) ;
        P%=mod;

	return P;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        cout<<PermutationCoeff(n,k)<<endl;
    }
	return 0;
}
