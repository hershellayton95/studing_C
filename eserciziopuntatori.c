#include <stdio.h>

void push(int n);
int pop();

int stack[10];
int *top;
int *p1;
int main()
{
    int v = 0;

    top = stack;
    p1 = stack;

    do
    {
        printf("v: ");
        scanf("%d", &v);
        printf("\nricevuto valore: %d\n", v);
        if (v > 0)
        {
            printf("\naggiungi allo stack: %d\n", v);
            push(v);
        }
        else
        {
            int ext = pop();
            printf("\nestratto: %d\n", ext);
        }
    } while (v >= 0);
    printf("END\n");

    return 0;
}

void push(int n)
{
    if (p1 == top + 10)
    {
        printf("\ncapienza superata. nessun inserimento\n");
    }
    else
    {
        *p1 = n;
        p1++;
    }
}
int pop()
{
    int n = 0;
    if (p1 == top)
    {
        printf("\nstack vuoto\n");
        n = 0;
    }
    else
    {
        p1--;
        n = *p1;
    }
    return n;
}
