#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

string intToRoman(int num)
{
    map<int, string> m;
    m[1] = "I";
    m[2] = "II";
    m[3] = "III";
    m[4] = "IV";
    m[5] = "V";
    m[6] = "VI";
    m[7] = "VII";
    m[8] = "VIII";
    m[9] = "IX";
    m[10] = "X";
    m[20] = "XX";
    m[30] = "XXX";
    m[40] = "XL";
    m[50] = "L";
    m[60] = "LX";
    m[70] = "LXX";
    m[80] = "LXXX";
    m[90] = "XC";
    m[100] = "C";
    m[200] = "CC";
    m[300] = "CCC";
    m[400] = "CD";
    m[500] = "D";
    m[600] = "DC";
    m[700] = "DCC";
    m[800] = "DCCC";
    m[900] = "CM";
    m[1000] = "M";
    m[2000] = "MM";
    m[3000] = "MMM";
    int k = 1;
    string ans = "";
    int n = num, s = num;
    while (s != 0)
    {
        int y = pow(10, k);
        int g = n % y;
        string l = m[g];
        l += ans;
        ans = l;
        n -= g;
        ++k;
        s /= 10;
    }
    return ans;
}

void solve()
{
    int a;
    cin >> a;
    cout << intToRoman(a);
}

int main()
{
    _ fs
        ll test = 1;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}