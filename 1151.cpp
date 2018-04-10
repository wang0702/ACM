#include <stdio.h>
//#include <cstring>

using namespace std;

int main()
{
    long long a, b, c;
    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF)
    {

        if (a == 0 && b == 0 && c == 0)
        {
            printf("inf\n");
            continue;
        }
        if (a == 0 && b == 0 && c != 0)
        {
            printf("0\n");
            continue;
        }
        if (a == 0 && b != 0)
        {
            printf("1\n");
            continue;
        }
        long long u = b * b - 4 * a * c;
        if (u == 0)printf("1\n");
        else if (u > 0)printf("2\n");

        else if (u < 0) printf("0\n");

    }
    return 0;
}