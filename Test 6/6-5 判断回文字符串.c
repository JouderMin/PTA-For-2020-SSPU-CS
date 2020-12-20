#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum { false, true } bool;

bool palindrome(char *s);

int main(void) {
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char *s) {
    int i, j;

    for (i = 0; i < 100; i++) {
        if (s[i] == '\0') {
            break;
        }
    }
    i--;
    for (j = 0; j < i / 2 + 1; j++) {
        if (s[j] != s[i - j]) {
            return false;
        }
    }
    if (j == i / 2 + 1) {
        return true;
    }
}
