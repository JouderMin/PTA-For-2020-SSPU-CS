#include <stdio.h>

int getID(char c) {
    return c - 'A';
}

int main(void) {
    int x[26] = {0};
    char c;
    int flag = 0;

    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            if (x[getID(c)] == 0) {
                printf("%c", c);
                x[getID(c)]++;
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("Not Found");
    }

    return 0;
}
