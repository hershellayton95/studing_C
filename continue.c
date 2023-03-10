#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    while (i < 10) {
        i++;
        if (i == 5) continue;
        printf("i: %d \n", i);
    }
    return 0;

}
