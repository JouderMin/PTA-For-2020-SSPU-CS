#include <stdio.h>

int main(void) {
    int n;
    char ch = 'A';
    int i   = 0;

    scanf("%d", &n);
    if (n < 7) {
        while (n != 0) {
            for (i = 0; i < n; i++) {
                printf("%c ", ch);
                ch++;
            }
            printf("\n");
            n = n - 1;
        }
    }

    return 0;
}
