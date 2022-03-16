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

int prefixSum(int a[], int k)
{
	int s = 0;
	for (int i = 0; i < k; ++i)
	{
		s += a[i];
	}
	return s;
}

void solve()
{
	int n, k, j = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	sort(a, a + n);
	int i = 0, s = 0;
	for (i = 0; i < n; ++i)
	{
		if (a[i] <= k)
		{
			s += a[i];
			++j;
			k -= a[i];
		}
		else
			break;
	}
	if (i < n)
	{
		if (k >= ceil(double(a[i] / 2)))
			++j;
	}
	cout << j << endl;
}

//===========MAIN BEGIN===========

int main()
{
	_ fs
		ll test;
	cin >> test;
	while (test--)
		solve();
	return 0;
}