#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    //bisogna passare il puntatore come secondo variabile

    printf("inserisci un numero: ");
    int ret = scanf("%d", &numero);
    printf("n: %d\n", numero);

    char str[20];
    printf("inserisci una stringa: ");
    ret = scanf("%s", &str);
    printf("msg: %s (%d)\n", str, ret);

    char msg[50];
    printf("inserisci una stringa: ");
    ret = scanf_s("%s", &msg, sizeof(msg));
    printf("msg: %s (%d)", str, ret);

    return 0;
}
