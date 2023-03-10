#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    printf("num par: %d\n", argc);
    printf("nome comando: %s\n", argv[0]);

    if (argc == 2) {
        printf("Ciao, %s\n\n", argv[1]);
    } else {
        printf("Il comando %s richiede almeno 1 parametro\n\n", argv[0]);
    }

    return 0;
}
