#include <stdio.h>
#include <stdlib.h>

void elab1(char str[6]){
    for(int i = 0; i < 5; i++){
        printf("%d:%c\n", i, str[i]);
    }
}

void elab2(char str[]){
    for(int i = 0; i < 5; i++){
        printf("%d:%c\n", i, str[i]);
    }
}

void elab3(char *str){
    for(int i = 0; i < 5; i++){
        printf("%d:%c\n", i, str[i]);
    }
}
int main(){
    char str[6] = "hello";
    elab1(str);
    elab2(str);
    elab3(str);


    return 0;
}
