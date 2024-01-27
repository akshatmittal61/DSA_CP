#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int get(int n, vector<int> a, int q, int two, vector<vector<int>> queries)
{
    vector<int> rightmost(n + 1, -1);
    for (int i = n - 1; i >= 0; --i)
    {
        rightmost[a[i]] = i;
    }

    vector<int> results;

    for (int i = 0; i < q; ++i)
    {
        int l = queries[i][0] - 1; // Convert to 0-based indexing
        int r = queries[i][1] - 1;

        int minRanges = 0;
        int right = INT_MIN;

        for (int j = l; j <= r; ++j)
        {
            right = max(right, rightmost[a[j]]);

            if (j == right)
            {
                ++minRanges;
            }
        }

        results.push_back(minRanges);
    }

    return results[two];
}

int main()
{
    int n, q, two;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cin >> q >> two;

    vector<vector<int>> queries(q, vector<int>(2));
    for (int i = 0; i < q; ++i)
    {
        cin >> queries[i][0] >> queries[i][1];
    }

    int result = get(n, a, q, two, queries);
    cout << result << endl;

    return 0;
}
