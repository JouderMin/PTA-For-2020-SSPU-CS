#include <stdio.h>

int main(void) {
    int n, x, j;
    scanf("%d %d", &n, &x);
    long num[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld", &num[i]);
    }
    for (j = 0; j < n; j++) {
        if (x == num[j])
            break;
    }
    if (j < n) {
        printf("%d\n", j);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
