#include <stdio.h>
#define MAXS 30

char * search(char * s, char * t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main(void) {
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char * search(char * s, char * t) {
    int i = 0, j = 0, k = 0;
    int m = strlen(s);
    int n = strlen(t);

    if (n == 0) {
        return NULL;
    }
    while (i < m && j < n) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }

    if (j == n) {
        return (char *)(s + i - n);
    } else {
        return NULL;
    }
}
