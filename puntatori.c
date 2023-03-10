#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 10;

    printf("n: %d\n", n);
    printf("&n: %p\n", &n);

    int *p1;
    p1 = &n;

    printf("*p1: %d\n", *p1);
    printf("p1: %p\n", p1);

/*
    int *p2;
    p2 = n;

    printf("*p2: %d\n", *p2);
    printf("p2: %p\n", p2);
    */

    int *p3;
    *p3 = n;

    printf("*p3: %d\n", *p3);
    printf("p3: %p\n", p3);

/*
    int p4;
    *p4 = n;

    printf("*p4: %d\n", *p4);
    printf("p4: %p\n", p4);
    */
    /*
    int p5;
    *p5 = &n;

    printf("*p5: %d\n", *p5);
    printf("p5: %p\n", p5);
*/
/*
    int p6;
    &p6 = &n;

    printf("*p6: %d\n", *p6);
    printf("p6: %p\n", p6);
    */
/*
    int *p7;
    *p7 = &n;

    printf("*p7: %d\n", *p7);
    printf("p7: %p\n", p7);
    */

    return 0;
}
