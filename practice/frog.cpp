#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/* vector<int> frog(int n, int m, int c, vector<int> a, vector<vector<int>> edges) {
    vector<vector<int>> adj(n + 1);
    
    for (int i = 0; i < m; ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> dp(n + 1, 1);
    
    for (int i = 1; i <= n; ++i) {
        for (int j : adj[i]) {
            if (a[i - 1] < a[j - 1]) {
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
    }
    
    return dp;
} */

vector<vector<int>> adj;
vector<int> a;
vector<int> dp;

void dfs(int node, int parent) {
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            if (a[node - 1] < a[neighbor - 1]) {
                dp[neighbor] = max(dp[neighbor], dp[node] + 1);
                dfs(neighbor, node);
            }
        }
    }
}

vector<int> frog(int n, int m, int c, vector<int> values, vector<vector<int>> edges) {
    a = move(values);
    adj.resize(n + 1);
    dp.resize(n + 1, 1);

    for (int i = 0; i < m; ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i) {
        dfs(i, 0);
    }

    return dp;
}

int main()
{
    int n, m, c;

    cin >> n >> m >> c;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<vector<int>> edges(m, vector<int>(c));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> edges[i][j];
        }
    }

    vector<int> result = frog(n, m, c, a, edges);
    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
