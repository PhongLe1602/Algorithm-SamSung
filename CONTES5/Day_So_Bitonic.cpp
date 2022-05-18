#include <bits/stdc++.h>
using namespace std;
long MaxSumBS(long arr[], int n)
{
	long max_sum = INT_MIN;
	long MSIBS[n], MSDBS[n];
	for (int i = 0; i < n; i++) {
		MSDBS[i] = arr[i];
		MSIBS[i] = arr[i];
	}
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && MSIBS[i] < MSIBS[j] + arr[i])
				MSIBS[i] = MSIBS[j] + arr[i];
				
	for (int i = n - 2; i >= 0; i--)
		for (int j = n - 1; j > i; j--)
			if (arr[i] > arr[j] && MSDBS[i] < MSDBS[j] + arr[i])
				MSDBS[i] = MSDBS[j] + arr[i];
	for (int i = 0; i < n; i++)
		max_sum = max(max_sum, (MSDBS[i] + MSIBS[i] - arr[i]));

	return max_sum;
}

int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long arr[n];
		for(auto &i:arr) cin>>i;
		cout<<MaxSumBS(arr,n)<<endl;
	}

	return 0;
}
