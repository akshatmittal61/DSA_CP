#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> check(int t, vector<string> a, vector<string> b) {
    vector<string> result;

    for (int i = 0; i < t; ++i) {
        string sa = a[i];
        string sb = b[i];

        int n = sa.length();

        // Concatenate the original string with itself to check all possible sequences
        sa += sa;

        // Check if the second string is a substring of the concatenated string
        if (sa.find(sb) != string::npos) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
        }
    }

    return result;
}

/* bool isPossible(string s1, string s2) {
    int n = s1.length();

    // Concatenate the original string with itself to check all possible sequences
    s1 += s1;

    // Check if the second string is a substring of any cyclic permutation of the concatenated string
    for (int i = 0; i < n; ++i) {
        string rotatedString = s1.substr(i, n);
        string reversedRotatedString(rotatedString.rbegin(), rotatedString.rend());

        if (rotatedString == s2 || reversedRotatedString == s2) {
            return true;
        }
    }

    return false;
}

vector<string> check(int t, vector<string> a, vector<string> b) {
    vector<string> result;

    for (int i = 0; i < t; ++i) {
        string sa = a[i];
        string sb = b[i];

        if (isPossible(sa, sb) || isPossible(sa, string(sb.rbegin(), sb.rend())) ||
            isPossible(string(sa.rbegin(), sa.rend()), sb) || isPossible(string(sa.rbegin(), sa.rend()), string(sb.rbegin(), sb.rend()))) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
        }
    }

    return result;
} */

int main()
{
    int t;
    cin >> t;

    vector<string> a(t);
    vector<string> b(t);

    for (int i = 0; i < t; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < t; ++i)
    {
        cin >> b[i];
    }

    vector<string> result = check(t, a, b);

    for (const auto &res : result)
    {
        cout << res << endl;
    }

    return 0;
}
