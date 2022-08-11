bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

template <typename T>
void Swap(T *a, T *b)
{
    T t;
    t = *a;
    *a = *b;
    *b = t;
}

long long hcf(long long a, long long b)
{
    long long h;
    for (long long i = 1; i <= (a < b ? a : b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            h = i;
    }
    return h;
}

long long factorial(long long a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}
