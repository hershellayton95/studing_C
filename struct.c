#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address
{
    char nome[20];
    char cognome[20];
    int cap;
};

struct address_2
{
    char nome[20];
    char cognome[20];
    int cap;
} suo, tuo; /*lo assegno direttamente alle variabili*/

struct
{
    char nome[20];
    char cognome[20];
    int cap;
} nostro; /*lo uso solo una volta*/

int main()
{

    char nome[] = "Filippo";
    char cognome[] = "Di Marco";
    int cap = 98070;

    struct address mio;

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
