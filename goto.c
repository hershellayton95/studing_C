#include <stdio.h>

int main (){
    int x = 0;
    loop:
        x++;
        printf("%d\n", x);
        if(x<10) goto loop;
    printf("OK");
    return 0;
}
