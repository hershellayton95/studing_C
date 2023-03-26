#include <stdio.h>

#define DEBUG

#define ARCH_64

int main(int argc, char const *argv[])
{
    int n = 123;
    #ifdef DEBUG
        printf("La variabile n vale: %d\n", n);
    #else
        printf("n: %d\n", n);
    #endif
    n++;
    printf("n: %d\n", n);

     #ifndef ARCH_64
        printf("non è a 64bit: %d\n", n);
        #error Non è a 64bit!
    #endif
    
     #if defined ARCH_64
        printf("è a 64bit: %d\n", n);
    #endif
    return 0;
}
