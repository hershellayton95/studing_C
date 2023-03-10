#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct addr
{
    int id;
    char nome[20];
    int cap;
};

void printAddr(struct addr i);

int main()
{
    struct addr indir_casa;

    indir_casa.id = 1;
    indir_casa.cap = 12345;
    strncpy(indir_casa.nome, "Mario", 6);

    indir_casa.nome[5] = 0;

    printAddr(indir_casa);

    return 0;
}

void printAddr(struct addr i)
{
    printf("nome: %s, id: %d, cap: %d\n", i.nome, i.id, i.cap);
}
