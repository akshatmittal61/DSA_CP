#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

template <typename T>
void Swap(T *a, T *b)
{
    T t;
    t = *a;
    *a = *b;
    *b = t;
}

long long hcf(long long a, long long b)
{
    long long h;
    for (long long i = 1; i <= (a < b ? a : b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            h = i;
    }
    return h;
}

long long factorial(long long a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}

// JS: Array.split()

vector<string> split(string s, char c)
{
    int n = s.length();
    vector<string> ans;
    for (int i = 0; i < n; ++i)
    {
        string h = "";
        for (int j = i; j < n; ++j)
        {
            if (s[j] == c || j == n - 1)
            {
                i = j;
                if (j == n - 1)
                    h += s[n - 1];
                break;
            }
            else
                h += s[j];
        }
        ans.push_back(h);
    }
    return ans;
}

// JS: Array.join()

string join(vector<string> v, char c)
{
    string ans = "";
    int n = v.size();
    for (int i = 0; i < n; ++i)
    {
        ans += v[i];
        if (i != n - 1)
            ans += c;
    }
    return ans;
}