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

void print1Ton(int n)
{
    if (n == 0)
        return;
    print1Ton(n - 1);
    cout << n << ' ';
}

void printNTo1(int n)
{
    if (n == 0)
        return;
    cout << n << ' ';
    printNTo1(n - 1);
}

int floorLog2(int n)
{
    return n == 1 ? 0 : 1 + floorLog2(n / 2);
}

void printBinaryEqv(int n)
{
    if (n == 0)
        return;
    printBinaryEqv(n / 2);
    cout << n % 2;
}

int factorial(int n, int k = 1)
{
    if (n == 0 || n == 1)
        return k;
    return factorial(n - 1, k * n);
}

int nthFib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    return nthFib(n - 2) + nthFib(n - 1);
}

int sumOfNaturalNo(int n, int k = 0)
{
    if (n == 1)
        return k + 1;
    return sumOfNaturalNo(n - 1, k + n);
}

bool checkPalindrome(string s, int i = 0)
{
    int n = s.length();
    if ((n & 1) && i == (n - 1) / 2)
        return true;
    else if (!(n & 1) && i == (n - 2) / 2)
        return s[i] == s[i + 1];
    if (s[i] != s[n - i - 1])
        return false;
    return checkPalindrome(s, i + 1);
}

int sumOfDigits(int n)
{
    if (n < 10)
        return n;
    return n % 10 + sumOfDigits(n / 10);
}

void solve()
{
    int n, ch;
    string s;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cin >> n;
        printNTo1(n);
        cout << endl;
        break;
    case 2:
        cin >> n;
        print1Ton(n);
        cout << endl;
        break;
    case 3:
        cin >> n;
        cout << floorLog2(n);
        break;
    case 4:
        cin >> n;
        printBinaryEqv(n);
        break;
    case 5:
        cin >> n;
        cout << factorial(n);
        break;
    case 6:
        cin >> n;
        cout << nthFib(n);
        break;
    case 7:
        cin >> n;
        cout << sumOfNaturalNo(n);
        break;
    case 8:
        cin >> s;
        cout << checkPalindrome(s);
        break;
    case 9:
        cin >> n;
        cout << sumOfDigits(n);
    default:
        break;
    }
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