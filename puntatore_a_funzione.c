#include <stdio.h>

int somma(int a, int b);
int prod(int c, int d);

int main()
{
    int (*p)(int a, int b);
    int n, m;

    int cmd;
    do
    {
        printf("n? ");
        scanf("%d", &n);
        printf("\nm? ");
        scanf("%d", &m);

        printf("\nsomma o moltiplicazione (1/2)? ");
        scanf("%d", &cmd);

        if (cmd == 1)
        {
            p = somma;
        }
        else
        {
            p = prod;
        }

        int res = (*p)(n, m);
        printf("\nil risultato è: %d", res);

        printf("\nAncora (1=si/0=no)? ");
        scanf(" %d", &cmd);
        getchar();
    } while (cmd != 0);

    return 0;
}

int somma(int a, int b)
{
    return a + b;
}

int prod(int c, int d)
{
    return c * d;
}
