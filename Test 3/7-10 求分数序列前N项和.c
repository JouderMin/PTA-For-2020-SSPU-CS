#include <stdio.h>

int main(void) {
    int N, k;
    double i, j, sum, x;

    scanf("%d", &N);
    i   = 1.0;
    j   = 2.0;
    sum = 0.0;
    for (k = 1; k <= N; k++) {
        sum += j / i;
        x = i;
        i = j;
        j = j + x;
    }
    printf("%.2f", sum);

    return 0;
}
