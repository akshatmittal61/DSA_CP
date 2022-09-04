#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s)
{
    int n = s.size();
    stack<char> a;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            a.push(s[i]);
        else if (!a.empty() && s[i] == ')')
        {
            if (a.top() == '(')
                a.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (!a.empty() && s[i] == '}')
        {
            if (a.top() == '{')
                a.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (!a.empty() && s[i] == ']')
        {
            if (a.top() == '[')
                a.pop();
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!a.empty())
        return false;
    return ans;
}
int main()
{
    cout << "\n\n\n";
    string a = "(2*3+[4+5]+[5-7*{2+4}])";
    string b = "(2+3-[4*6)+4]";
    if (isValid(a))
        cout << "\n a: Valid String";
    else
        cout << "\n a: Invalid String";
    if (isValid(b))
        cout << "\n b: Valid String";
    else
        cout << "\n b: Invalid String";
    cout << "\n\n\n";
    return 0;
}