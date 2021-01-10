#include <stdio.h>
#include <string.h>

int main(void) {
    char str[81];
    int i, len;
    char ch;

    gets(str);
    len = strlen(str);
    for (i = 0; i < len / 2; ++i) {
        ch               = str[i];
        str[i]           = str[len - i - 1];
        str[len - i - 1] = ch;
    }
    printf("%s\n", str);

    return 0;
}
