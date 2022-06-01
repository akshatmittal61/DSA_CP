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
	ll n, s = 0;
	cin >> n;
	vector<ll> a, b;
	int lima = 0, limb = 0;
	fl(i, n)
	{
		int l;
		cin >> l;
		if (i == 0)
			lima = l;
		a.push_back(l);
		if (l < lima)
			lima = l;
	}
	fl(i, n)
	{
		int l;
		cin >> l;
		if (i == 0)
			limb = l;
		b.push_back(l);
		if (l < limb)
			limb = l;
	}
	fl(i, n)
	{
		int k = abs(a[i] - lima);
		int l = abs(b[i] - limb);
		s += (max(k, l));
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