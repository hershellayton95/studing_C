#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _address
{
    char nome[20];
    char cognome[20];
    int cap;
} address; // mi creo la custom type

int main()
{

    char nome[] = "Filippo";
    char cognome[] = "Di Marco";
    int cap = 98070;

    address mio;

    strncpy(mio.nome, nome, sizeof(nome));
    mio.nome[sizeof(nome) - 1] = 0;

    strncpy(mio.cognome, cognome, sizeof(cognome));
    mio.cognome[sizeof(cognome) - 1] = 0;

    mio.cap = cap;

    printf("%s\n", mio.nome);
    printf("%s\n", mio.cognome);
    printf("%d", mio.cap);

    return 0;
}
