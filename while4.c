#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    strcpy(str, "hello");
    printf("%s\n", str);

    int l = strlen(str);
    printf("len: %d\n", l);

    while(l < sizeof(str)){
        str[l] = '#';
        l++;
    }
    str[l] = '\0';
    printf("%s\n", str);

    return 0;
}
