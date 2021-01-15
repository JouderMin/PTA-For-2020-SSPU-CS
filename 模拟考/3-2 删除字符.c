#include <stdio.h>
#define MAXN 20

void delchar(char * str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main(void) {
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

#include <string.h>

// findpos can be replaced by strchr
char * findpos(char * str, char c) {
    for (int i = 0; i < strlen(str); i++) {
        if (c == str[i]) {
            return &str[i];
        }
    }
    return NULL;
}

void delchar(char * str, char c) {
    char *s, *t, *f;
    while ((f = findpos(str, c)) != NULL) {
        *f  = '\0';
        str = strcat(str, f + 1);
    }
}
