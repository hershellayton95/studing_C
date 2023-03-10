#include <stdio.h>

int main (){

    printf("Scegli un numero da 1 a 3\n");
    int n;
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("hai scelto 1\n");
        {
            int x = 2;
            printf("(prova blocco interno)%d", x);

        }
        break;
    case 2:
        printf("hai scelto 2");
        break;
    case 3:
        printf("hai scelto 3");
        break;
    default:
        printf("hai scelto %d: non dovevi scegliere da 1 a 3", n);
    }

    return 0;
}
