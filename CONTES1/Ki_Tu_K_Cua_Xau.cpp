#include <bits/stdc++.h>
using namespace std;
// Ky tu thu k trong xau;
void slove(int l, int k)
{
	if (k % 2 == 1)
		cout << "A";
	else
	{
		int n = 2;
		int m = 1;
		while (k % n == 0)
		{
			m++;
			n = pow(2, m);
		}
		char h = 'A' + m-1;
		cout << h;
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		slove(n, k);
		cout << endl;
	}
}