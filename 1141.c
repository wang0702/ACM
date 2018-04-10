#include <stdio.h>
//#include <string.h>
//#include <math.h>

long long x, y, a;

int main()
{
    long long max;
    while (scanf("%lld %lld %lld", &x, &y, &a) != EOF)
    {
        a%=x+y;
        if (a == 0)
        {
            printf("light\n");
            continue;
        }
        while (a)
        {
            a -= x;
            if (a <= 0)
            {
                printf("wanshen\n");
                break;
            }
            a -= y;
            if (a <= 0)
            {
                printf("light\n");
                break;
            }
        }
    }
    return 0;
}