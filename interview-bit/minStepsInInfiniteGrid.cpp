int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int n = A.size(), r = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int p = A[i], q = B[i];
        int s = A[i + 1], t = B[i + 1];
        int d1 = 0;
        d1 = p > s ? p - s : s - p;
        int d2 = 0;
        d2 = q > t ? q - t : t - q;
        r += max(d1, d2);
    }
    return r;
}
