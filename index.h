long long isprime(long long a)
{
    long long k = 0;
    for (long long i = 2; i < a; ++i)
        if (a % i == 0)
            ++k;
    if (k == 0)
        return 1;
    else
        return 0;
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
    long long hcf;
    for (long long i = 1; i <= (a < b ? a : b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    return hcf;
}

long long factorial(long long a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}
