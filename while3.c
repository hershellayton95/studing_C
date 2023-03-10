#include <stdio.h>

int main(){
    char ch = '\0';

    printf("premi q per terminare\n");
    while ((ch = getchar())!='q');

    printf("ok\n");
    return 0;
}
