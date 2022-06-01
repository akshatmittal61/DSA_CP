#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
	int n;
	cin >> n;
	string s;
	vector<char> v;
	set<char> a;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
		if (s[i] != s[i + 1])
		{
			v.push_back(s[i]);
			a.insert(s[i]);
		}
	if (v.size() == a.size())
		cout << "YES";
	else
		cout << "NO";
}

int main()
{
	_ fs
		ll test;
	cin >> test;
	while (test--)
	{
		solve();
		cout << endl;
	}
	return 0;
}