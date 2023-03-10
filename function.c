#include <stdio.h>
#include <stdlib.h>

int inc(int n){

    n ++;

    printf("interno: %d\n", n);

    return n;
}

void inc2(int *n){
    *n= *n + 1;
    printf("interno: %d\n", *n);
}


int main(){

    int i = 0;

    printf("inizio: %d\n", i);
    inc(i);
    printf("dopo: %d\n", i);
    printf("\n");

    printf("inizio: %d\n", i);
    inc2(&i);
    printf("dopo: %d\n", i);
    printf("\n");
    return 0;
}
