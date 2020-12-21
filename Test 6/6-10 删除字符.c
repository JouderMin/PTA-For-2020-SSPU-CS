#include <stdio.h>
#define MAXN 20

void delchar(char *str, char c);
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

void delchar(char *str, char c) {
    char s[MAXN];
    if (str[0]) {
        for (int i = 0, j = 0; str[i]; i++, j++) {
            while (str[i] == c) {
                i++;
            }
            s[j] = str[i];
        }
        strcpy(str, s);
    } else {
        strcpy(str, "\0");
    }
}