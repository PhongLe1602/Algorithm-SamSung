// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Maximum possible valid number
#define MAX 543210

// To store all the required number
// from the range [1, MAX]
vector<string> ans;

// Function that returns true if x
// satisfies the given conditions
bool isValidNum(string x)
{

	// To store the digits of x
	map<int, int> mp;

	for (int i = 0; i < x.length(); i++) {

		// If current digit appears more than once
		if (mp.find(x[i] - '0') != mp.end()) {
			return false;
		}

		// If current digit is greater than 5
		else if (x[i] - '0' > 5) {
			return false;
		}

		// Put the digit in the map
		else {
			mp[x[i] - '0'] = 1;
		}
	}
	return true;
}

// Function to generate all the required
// numbers in the range [1, MAX]
void generate()
{

	// Insert first 5 valid numbers
	queue<string> q;
	q.push("1");
	q.push("2");
	q.push("3");
	q.push("4");
	q.push("5");

	bool flag = true;

	// Inserting 0 externally because 0 cannot
	// be the leading digit in any number
	ans.push_back("0");

	while (!q.empty()) {
		string x = q.front();
		q.pop();

		// If x satisfies the given conditions
		if (isValidNum(x)) {
			ans.push_back(x);
		}

		// Cannot append anymore digit as
		// adding a digit will repeat one of
		// the already present digits
		if (x.length() == 6)
			continue;

		// Append all the valid digits one by
		// one and push the new generated
		// number to the queue
		for (int i = 0; i <= 5; i++) {
			string z = to_string(i);

			// Append the digit
			string temp = x + z;

			// Push the newly generated
			// number to the queue
			q.push(temp);
		}
	}
}

// Function to copmpare two strings
// which represent a numerical value
bool comp(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

// Function to return the count of
// valid numbers in the range [l, r]
int findcount(string l, string r)
{

	// Generate all the valid numbers
	// in the range [1, MAX]
	generate();

	// To store the count of numbers
	// in the range [l, r]
	int count = 0;

	// For every valid number in
	// the range [1, MAX]
	for (int i = 0; i < ans.size(); i++) {

		string a = ans[i];

		// If current number is within
		// the required range
		if (comp(l, a) && comp(a, r)) {
			count++;
		}

		// If number is equal to either l or r
		else if (a == l || a == r) {
			count++;
		}
	}

	return count;
}

// Driver code
main()
{

    int t;
    cin>>t;
    while(t--){
        string l="",r="";
        cin>>l>>r;
        ans.clear();
        cout << findcount(l, r)<<endl;
    }
}

