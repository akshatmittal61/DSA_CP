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
	int k = 1, m, j = 0;
	vector<int> v;
	while (n != 0)
	{
		m = n % 10;
		if (m != 0)
		{
			v.push_back(m * k);
			++j;
		}
		k *= 10;
		n /= 10;
	}
	cout << j << endl;
	fl(i, j) cout << v[i] << ' ';
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