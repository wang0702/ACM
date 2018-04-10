#include <stdio.h>
//#include <cstring>

long long p;
int n, m;

long long jc(int n)
{
    long long u = 1;
    for (int i = n; i >= 1; i--)
    {
        u = u * i;
    }
    return u;
}

int main()
{
    while (scanf("%d %d %lld", &n, &m, &p) != EOF)
    {
        //int sum = n + m;
        long long s1 = jc(n);
        long long s2 = jc(n - m);
        long long s3 = jc(m);
        long long s4 = s1 / (s2 * s3);
        long long s5 = s4 % p;
        printf("%lld\n", s5);

    }
    return 0;
}