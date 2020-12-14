#include <stdio.h>

int main(void) {
    int n, a[6][6], i, j, h, l, f = 0, temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (n == 1) {
        printf("0 0");
        return 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 1, temp = a[i][0]; j < n; j++) {
            if (temp < a[i][j]) {
                temp = a[i][j];
            }
        }

        for (j = 0; j < n; j++) {
            if (temp == a[i][j]) {
                l = j;
                for (h = 0, f = 0; h < n; h++) {
                    if (temp > a[h][l]) {
                        f++;
                    }
                }
                if (!f) {
                    printf("%d %d", i, l);
                    return 0;
                }
            }
        }
    }
    printf("NONE");

    return 0;
}
