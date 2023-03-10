#include <stdio.h>
#include <stdlib.h>

enum giorni
{
    lun = 1,
    mar,
    mer,
    gio,
    ven,
    sab,
    dom
};

int main()
{
    enum giorni wk;

    wk = lun;
    printf("%d\n", wk);
    wk = dom;
    printf("%d\n", wk);

    return 0;
}
