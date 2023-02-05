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

vector<string> generateStringSubsets(string original, vector<string> ans = {}, string s = "", int index = 0)
{
    if (index == original.length() - 1)
    {
        ans.push_back(s + "");
        ans.push_back(s + original[index]);
        return ans;
    }
    unordered_set<string> st;
    vector<string> p1 = generateStringSubsets(original, ans, s + "", index + 1);
    for (string a : p1)
        st.insert(a);
    vector<string> p2 = generateStringSubsets(original, ans, s + original[index], index + 1);
    for (string a : p2)
        st.insert(a);
    for (auto f : st)
        ans.push_back(f);
    return ans;
}

vector<vector<int>> generateIntegerSubset(vector<int> nums, vector<vector<int>> ans = {}, vector<int> arr = {}, int index = 0)
{
    if (index == nums.size() - 1)
    {
        vector<int> v = arr;
        ans.push_back(v);
        v.push_back(nums[index]);
        ans.push_back(v);
        return ans;
    }
    set<vector<int>> st;
    vector<int> v = arr;
    vector<vector<int>> p1 = generateIntegerSubset(nums, ans, v, index + 1);
    for (vector<int> a : p1)
        st.insert(a);
    v.push_back(nums[index]);
    vector<vector<int>> p2 = generateIntegerSubset(nums, ans, v, index + 1);
    for (vector<int> a : p2)
        st.insert(a);
    for (auto f : st)
        ans.push_back(f);
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    vector<string> ans = generateStringSubsets(s);
    for (auto x : ans)
        cout << x << ' ';
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