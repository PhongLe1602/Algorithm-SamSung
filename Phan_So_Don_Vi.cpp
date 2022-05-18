// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to split the fraction into
// distinct unit fraction
vector<string> FractionSplit(long long n, long long d)
{
 
    // To store answer
    vector<string> UnitFactions;
 
    // While numerator is positive
    while (n > 0) {
 
        // Finding x = ceil(d/n)
        long long x = (d + n - 1) / n;
 
        // Add 1/x to list of ans
        string s = "1/" + to_string(x);
        UnitFactions.push_back(s);
 
        // Update fraction
        n = n * x - d;
        d = d * x;
    }
    return UnitFactions;
}
 
// Driver Code
main()
{
    // Print Answer
    int t;
    cin>>t;
    while(t--){
        long long p,q;
        cin>>p>>q;
        auto res = FractionSplit(p, q);
        for (int i=0;i<res.size();i++){
            if(i<res.size()-1){
                cout << res[i] << " + ";
            }else{
                cout << res[i];
            }
        }
        cout<<endl;
    }
}