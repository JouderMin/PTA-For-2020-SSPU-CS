#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    char s[81], b[81], c[81];
    int i, j = 0, k = 0, sum;

    gets(s);
    sum = strlen(s);
    for (i = 0; i < sum; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            b[j] = s[i];
            j++;
        }
    }
    i       = 0;
    int cnt = 0;
    while (b[i] == '0') {
        cnt++;
        i++;
    }
    for (i = cnt; i < j; i++) {
        c[k] = b[i];
        k++;
    }
    if (k > 0) {
        for (i = 0; i < k; i++) {
            printf("%c", c[i]);
        }
    } else {
        printf("0");
    }

    return 0;
}
