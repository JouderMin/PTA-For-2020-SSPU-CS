#include <stdio.h>

int main(void) {
    char ch;

    while ((ch = getchar()) != '#') {
        if (ch <= 'z' && ch >= 'a') {
            ch = ch + 'A' - 'a';
            printf("%c", ch);
        } else if (ch <= 'Z' && ch >= 'A') {
            ch = ch + 'a' - 'A';
            printf("%c", ch);
        } else
            printf("%c", ch);
    }
    printf("\n");

    return 0;
}
