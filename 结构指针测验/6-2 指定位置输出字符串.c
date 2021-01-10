#include <stdio.h>

#define MAXS 10

char * match(char * s, char ch1, char ch2);

int main(void) {
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

#include <string.h>

char kong = '\0';

char * match(char * s, char ch1, char ch2) {
    int n       = strlen(s);
    char * p    = NULL;
    _Bool isCh1 = 0;

    for (int i = 0; i < n; i++) {
        if (ch1 == s[i]) {
            if (!isCh1) {
                p     = &s[i];
                isCh1 = 1;
                while (ch2 != s[i] && i < n) {
                    printf("%c", s[i]);
                    i++;
                }
                if (i != n) {
                    printf("%c", s[i]);
                }
            }
        }
    }
    printf("\n");

    if (p == NULL) {
        p = &kong;
    }

    return p;
}
