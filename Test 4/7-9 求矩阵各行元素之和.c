#include <stdio.h>

int main(void) {
    int n = 0, m = 0, i = 0, j = 0, b = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b = b + a[i][j];
        }
        printf("%d\n", b);
        b = 0;
    }

    return 0;
}
