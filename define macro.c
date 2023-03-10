#include <stdio.h>

#define ABS(a) (a) < 0 ? -(a) : (a)

int main()
{
    int n = 12;
    printf("%d; abs=%d\n", n, ABS(n));
    n = -12;
    printf("%d; abs=%d\n", n, ABS(n));

    return 0;
}
