#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    int n, x, k;
    cin >> n >> x >> k;
    int t = k / x;
    if (t > n)
        cout << n;
    else
        cout << t;
	    cout<<endl;
	}
	return 0;
}
