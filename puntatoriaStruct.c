#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mail
{
    int id;
    char addr[20];
    char titolo[20];
    char body[100];
};

int main()
{
    struct mail saluto;
    saluto.id = 1;

    struct mail *p;

    p = &saluto;

    int n = p->id;

    printf("mail id %d\n", n);

    return 0;
}
