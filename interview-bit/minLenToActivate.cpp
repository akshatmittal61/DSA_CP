bool includes(vector<int> &A, int B, int p, int q)
{
    int n = A.size();
    if (p < 0)
        p = 0;
    if (q >= n)
        q = n - 1;
    for (int i = p; i < q; ++i)
        if (A[i] == 1)
            return true;
    return false;
}
int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int k = 0;
    for (int i = 0; i < n; i += 2 * B - 1)
    {
        if (includes(A, B, i - B, i + B))
            ++k;
        else
            return -1;
    }
    return k;
}
