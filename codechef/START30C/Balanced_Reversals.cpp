#include <bits/stdc++.h>
using namespace std;

void revert(string &s, int a, int b)
{
	int k = (b - a) / 2;
	for (int i = a; i <= a + k; ++i)
		swap(s[i], s[b - i + 1]);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		int n;
		cin >> n >> s;
		int n0 = 0, n1 = 0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == '0')
				++n0;
			else
				++n1;
		}
		for (int i = 0; i < n0; i++)
			cout << '0';
		for (int i = 0; i < n1; i++)
			cout << '1';
		cout << endl;
	}
	return 0;
}
