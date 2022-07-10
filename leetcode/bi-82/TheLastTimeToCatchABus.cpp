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

int latestTimeCatchTheBus(vector<int> &buses, vector<int> &passengers, int capacity)
{
    sort(buses.begin(), buses.end());
    sort(passengers.begin(), passengers.end());
    int c = 0, pp = 0, pb = 0;
    queue<int> Buses, Passengers;
    for (auto i : buses)
        Buses.push(i);
    for (auto i : passengers)
        Passengers.push(i);
    while (!Passengers.empty() && !Buses.empty())
    {
        if (Passengers.front() <= Buses.front() && c < capacity)
        {
            Passengers.pop();
            ++c;
            ++pp;
        }
        else
        {
            Buses.pop();
            c = 0;
        }
    }
    if (Buses.empty())
    {
        for (int i = pp - 1, j = 1; i > 0; --i)
            if (passengers[i] - j != passengers[i - j])
                return passengers[i] - j;
    }
    if (Passengers.empty())
    {
        for (int i = passengers.size() - 1, j = 1; i > 0; --i)
            if (passengers[i] - j != passengers[i - j])
                return passengers[i] - j;
    }
    pp = passengers.size() - 1, pb = buses.size() - 1;
    for (int i = pp, j = pb; i >= 0 && j >= 0; --j)
    {
        if (passengers[i] > buses[j])
            --i;
        else
            return buses[j];
    }
    return -1;
}

void solve()
{
    int m, n, c;
    cin >> m >> n >> c;
    vector<int> buses, passengers;
    fl(i, m)
    {
        int k;
        cin >> k;
        buses.push_back(k);
    }
    fl(i, n)
    {
        int k;
        cin >> k;
        passengers.push_back(k);
    }
    cout << latestTimeCatchTheBus(buses, passengers, c);
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