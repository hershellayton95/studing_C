#include <stdio.h>


int main(){
    char ch[20];
    int i = 0;
    while (1) {
        ch[i] = getchar();
        if (ch[i] == '\n') {
            ch[i] = '\0';
            break;
        }
        if (ch[i] == 'q') {
            ch[i] = '\0';
            break;
        }
        i++;
    }
    printf("You entered: %s\n", ch);
    return 0;
}
