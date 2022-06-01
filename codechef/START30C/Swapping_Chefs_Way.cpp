#include <bits/stdc++.h>
using namespace std;

bool sorted(string s)
{
	string p = s;
	sort(p.begin(), p.end());
	if (p == s)
		return true;
	else
		return false;
}
inline void Swap(string &s, int n, int i)
{
	swap(s[i], s[n - 1 - i]);
}
void solve()
{
	int n;
	string s;
	cin >> n >> s;
	if (sorted(s))
	{
		cout << "YES" << endl;
		return;
	}
	for (int i = 0; i < log(n); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (sorted(s))
			{
				cout << "YES" << endl;
				return;
			}
			if (s[j] > s[n - 1 - j])
				Swap(s, n, j);
		}
	}
	cout << "NO" << endl;
	return;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
