#include <stdio.h>

int main(void) {
    char sz;
    int i       = 0;
    int sl[128] = {0};

    while ((sz = getchar()) != '\n') {
        if (sl[sz] == 0) {
            sl[sz] = 1;
        }
    }
    for (i = 0; i < 128; i++) {
        if (sl[i] == 1) {
            printf("%c", i);
        }
    }

    return 0;
}
