#include <stdio.h>

int fact(long long  n)
{

    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
     long long n, m;
    while (scanf("%lld %lld", &n, &m) != EOF)
    {
        long long  add = fact(n) + fact(m);

        printf("%lld\n", add);
    }
}