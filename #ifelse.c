#include <stdio.h>

#define LEVEL 0

#define ITA 0
#define ENG 1
#define ESP 2
#define LANG ESP

int main()
{
#if LEVEL == 1
    printf("Livello 1\n");
#elif LEVEL > 1
    printf("Livello elevato\n");
#else
    printf("Livello 0\n");
#endif
#if LANG == ITA
    printf("Ciao\n");
#elif LANG == ENG
    printf("Hello\n");
#elif LANG == ESP
    printf("Ola\n");
#endif

    return 0;
}
