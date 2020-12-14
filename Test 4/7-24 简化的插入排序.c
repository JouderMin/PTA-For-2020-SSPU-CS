#include <stdio.h>

int main(void) {
    int n, i, j, x, a[11];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    i = 0;
    while (a[i] < x && i < n) {
        i++;
    }
    for (j = n - 1; j >= i; j--) {
        a[j + 1] = a[j];
    }
    a[i] = x;
    for (i = 0; i < n + 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
