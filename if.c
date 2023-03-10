#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand(time(NULL));
    int s = (rand()%10 + 1);
    printf("s: %d\n", s);

    int n;
    scanf("%d", &n);

    if(s==n){
        printf("n uguale a s");
    } else {
        printf("n uguale a s");
    }

    if(s>n){
        printf("il numero è piú grande");
    } else if(s<n){
        printf("il numero è piú piccolo");
    } else {
        printf("ok");
    }


    return 0;
}
