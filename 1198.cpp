#include <stdio.h>

long long a[10000005];
int n;

int main()
{
    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i <= 10000000; i++) a[i] = a[i - 1] + 2 * (i - 1);
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", a[n]);
    }
    return 0;
}