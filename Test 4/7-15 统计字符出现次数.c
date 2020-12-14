#include <stdio.h>

int main(void) {
    char str[80], s, ch;
    int i, count = 0, len = 0;

    ch = getchar();
    for (i = 0; ch != '\n'; i++) {
        str[i] = ch;
        len++;
        ch = getchar();
    }
    scanf("%c", &s);
    for (i = 0; i < len; i++) {
        if (str[i] == s) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
