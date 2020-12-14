#include <stdio.h>

int main(void) {
    int a[10][10];
    int i, j, n, m;
    scanf("%d%d", &m, &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    m = m % n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][(n - m + j) % n]);
        }
        printf("\n");
    }

    return 0;
}
