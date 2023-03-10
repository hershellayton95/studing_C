#include <stdio.h>

#define VERO 1
#define FALSO 0

#define UNO 1
#define DUE 2
#define TRE UNO + DUE

#define ERR_MSG "Messaggio di Errore\n"
#define LONG_ERR_MSG "Messaggio di Errore \
molto lungooooooooooooo\n"

#define BUFFSIZE 10

int main()
{

    if (VERO)
    {
        printf("vero\n");
    }

    printf("%d\n", UNO);
    printf("%d\n", DUE);
    printf("%d\n", TRE);

    printf(ERR_MSG);
    printf(LONG_ERR_MSG);

    int array[BUFFSIZE];

    for (int i = 0; i < BUFFSIZE; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < BUFFSIZE; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
