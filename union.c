#include <stdio.h>
#include <stdlib.h>

union value
{
    int i;
    long l;
};

int main()
{
    union value v;

    v.i = 10;
    printf("%d\n", v.i);
    printf("%d\n", v.l);
    v.l = 365;
    printf("%d\n", v.i);
    printf("%d\n", v.l);

    return 0;
}
