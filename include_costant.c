#include <stdio.h>
#include "functiontoinclude.h"



int main(int argc, char const *argv[])
{
    printf("line src: %d\n", __LINE__);
    printf("nome file src: %s\n", __FILE__);

    printf("ora: %s\n", __TIME__);


    int result = add(5,6);
    printf("la funzione add è incluse e ritorna %d\n", result);

    return 0;
}
