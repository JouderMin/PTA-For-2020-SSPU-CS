#include <stdio.h>
#define MAXS 20

void f(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main(void) {
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

#include <string.h>

void f(char *p) {
    size_t n = strlen(p),i;
    char re[MAXS];

    for (i = 0; p[i]; i++) {
        re[i] = p[n - i - 1];
    }
    re[i] = '\0';
    strcpy(p, re);
}
