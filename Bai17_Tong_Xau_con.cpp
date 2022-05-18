#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string a[4];
        int j = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '.'){
                a[j] += s[i];
            }
            else
            {
                j++;
            }
        }
        int cnt = 0;
        for(int i = 0; i <= 4; i++)
        {
            if(a[i] > "255")cnt++;
            if(a[i] < "0")cnt++;

        }
        if(cnt > 0)
        {
            cout << "NO" << endl;
        }
        else cout << "YES"<< endl;        
    }
}