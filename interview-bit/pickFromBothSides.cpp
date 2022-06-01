int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int t = INT_MIN, s = 0;
    for (int i = 0; i < B; ++i)
        s += A[i];
    int cf = B - 1, cb = n - 1;
    for (int i = 0; i < B; ++i)
    {
        s -= A[cf];
        s += A[cb];
        cf--;
        cb--;
        if (s > t)
            t = s;
    }
    return t;
}
