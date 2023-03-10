#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    int LOOP = 1;
    while (LOOP)
    {

        printf("\nquente celle? ");
        scanf("%d", &n);
        printf("\nn=%d ", n);

        ptr = (int *)malloc(n * sizeof(int));
        if (ptr == NULL)
        {
            printf("\nerrore memoria");
            exit(0);
        }
        else
        {
            int i = 0;
            printf("\nscrivo la memoria");
            for (i = 0; i < n; i++)
            {
                ptr[i] = i + 1;
            }

            printf("\nstampo\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", ptr[i]);
            }
        }

        free(ptr);

        char cmd;
        printf("\nancora (s/n)? ");
        scanf(" %c", &cmd);
        getchar();
        if (cmd != 's')
        {
            LOOP = 0;
        }
    }

    return 0;
}
