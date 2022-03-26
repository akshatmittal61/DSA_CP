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
	int n, k, l;
	ll s = 0;
	cin >> n >> k;
	vector<int> a, b;
	fl(i, n)
	{
		cin >> l;
		a.push_back(l);
	}
	fl(i, n)
	{
		cin >> l;
		b.push_back(l);
	}
	sortall(a);
	sortall(b);
	fl(i, n)
	{
		if (i < k)
			s += max(a[i], b[n - i - 1]);
		else
			s += a[i];
	}
	cout << s;
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