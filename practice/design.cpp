#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n\n";
    int i, j, k, n = 5;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = n; j >= i; --j)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j < n; ++j)
            cout << "   ";
        for (k = 1; k <= i; ++k)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j < i; ++j)
            cout << "   ";
        for (k = i; k <= n; ++k)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j < n; ++j)
            cout << "   ";
        for (k = 1; k < 2 * i; ++k)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = n; i >= 1; --i)
    {
        for (j = i; j < n; ++j)
            cout << "   ";
        for (k = 1; k < 2 * i; ++k)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j < n; ++j)
            cout << "   ";
        for (k = 1; k < 2 * i; ++k)
        {
            if (k == 1 || k == (2 * i) - 1 || i == n)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = n; i >= 1; --i)
    {
        for (j = i; j < n; ++j)
            cout << "   ";
        for (k = 1; k < 2 * i; ++k)
        {
            if (k == 1 || k == (2 * i) - 1 || i == n)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= 2 * n; ++i)
    {
        for (j = 1; j <= 2 * n; ++j)
        {
            if (i <= n)
            {
                if (j <= i || j > 2 * n - i)
                    cout << " * ";
                else
                    cout << "   ";
            }
            else
            {
                if (j <= 2 * n - i + 1 || j >= i)
                    cout << " * ";
                else
                    cout << "   ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << (i + j + 1) % 2 << ' ';
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= 2 * n; ++j)
        {
            if (i + j > n && (i + j) <= 2 * n)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        k = 1;
        for (j = 1; j <= 2 * n; ++j)
        {
            if (j <= n - i || j >= n + i)
                cout << " ";
            else
            {
                if ((j % 2 == 0 && i % 2 != 0) || (j % 2 != 0 && i % 2 == 0))
                    cout << " ";
                else
                    cout << k++;
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= 2 * n; ++j)
        {
            if (j <= n - i || j >= n + i)
                cout << "   ";
            else
            {
                if (j <= n)
                    cout << ' ' << (n + 1 - j) % (n + 1) << ' ';
                else
                    cout << ' ' << (j + 2) % (n + 1) << ' ';
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for (i = 1; i <= 2 * n; ++i)
    {
        for (j = 1; j <= 2 * n; ++j)
        {
            if (j <= n - (i <= n ? i : 2 * n - i + 1) || j >= n + (i <= n ? i : 2 * n - i + 1))
                cout << "   ";
            else
                cout << " * ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    return 0;
}
