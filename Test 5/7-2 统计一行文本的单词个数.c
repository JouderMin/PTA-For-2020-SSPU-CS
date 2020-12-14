#include <stdio.h>

int main(void) {
    char c, str[1000];
    int i, count = 0, number = 0;
    
    gets(str);
    for (i = 0;; i++) {
        c = str[i];
        if (c == '\0')
            break;
        if (c == ' ')
            number = 0;
        else if (number == 0) {
            number = 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}