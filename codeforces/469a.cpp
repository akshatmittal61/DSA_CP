#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, p, q, i = 0;
	cin >> n;
	bool con[n] = {false};
	cin >> p;
	int a[p];
	while (i < p)
		cin >> a[i++];
	i = 0;
	cin >> q;
	int b[q];
	while (i < q)
		cin >> b[i++];
	for (i = 0; i < p; ++i)
		con[a[i] - 1] = true;
	for (i = 0; i < q; ++i)
		con[b[i] - 1] = true;
	bool k = true;
	for (i = 0; i < n; ++i)
	{
		if (!con[i])
		{
			k = false;
			break;
		}
	}
	if (k)
		cout << "I become the guy." << endl;
	else
		cout << "Oh, my keyboard!" << endl;
	return 0;
}
