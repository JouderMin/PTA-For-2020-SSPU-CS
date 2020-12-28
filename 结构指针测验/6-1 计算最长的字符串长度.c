#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 10
#define MAXS 20

int max_len(char *s[], int n);

int main(void) {
    int i, n;
    char *string[MAXN] = {NULL};

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char) * MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

int max_len(char *s[], int n) {
    int max, count;

    max = strlen(s[0]);
    for (int i = 0; i < n; i++) {
        count = strlen(s[i]);
        if (max < count) {
            max = count;
        }
    }

    return max;
}
