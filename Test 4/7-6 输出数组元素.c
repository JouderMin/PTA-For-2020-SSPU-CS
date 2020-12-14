#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int num[n], out[n - 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        out[i] = num[i + 1] - num[i];
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d", out[i]);
        if ((i + 1) % 3 == 0) {
            printf("\n");
        }
        if ((i + 1) % 3 != 0 && i != n - 2) {
            printf(" ");
        }
    }

    return 0;
}
