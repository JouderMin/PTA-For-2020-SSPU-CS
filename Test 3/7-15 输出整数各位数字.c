#include <stdio.h>

int main(void) {
    char temp;

    temp = getchar();
    while (temp >= '0' && temp <= '9') {
        printf("%c ", temp);
        temp = getchar();
    }
    printf("\n");

    return 0;
}
