#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
                st.pop();
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
        return false;
    return ans;
}
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
        if (str[l++] != str[h--])
            return false;
    return true;
}
int main()
{
    string s = ")(()";
    if (isValid(s)||isPalindrome(s))
        cout << 1;
    else
        cout << 0;
    cout << endl;
    return 0;
}