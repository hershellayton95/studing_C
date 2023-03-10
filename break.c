#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    while (i < 10) {
        i++;
        printf("i: %d \n", i);
        if (i == 5) break;
    }
    return 0;

}
