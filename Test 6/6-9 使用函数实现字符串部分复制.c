#include <stdio.h>
#define MAXN 20

void strmcpy(char * t, int m, char * s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main(void) {
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

#include <string.h>

void strmcpy(char * t, int m, char * s) {
    int tLength = strlen(t), i;

    if (m <= tLength) {
        for (i = 0; t[i + m - 1]; i++) {
            s[i] = t[i + m - 1];
        }
        s[i] = '\0';
    } else {
        strcpy(s, "\0");
    }
}
