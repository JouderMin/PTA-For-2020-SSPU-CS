#include <math.h>
#include <stdio.h>

int main(void) {
    int temp, sum = 0, a, n, i, j;

    scanf("%d %d", &a, &n);
    for (i = 1; i <= n; i++) {
        for (j = i - 1, temp = 0; j >= 0; j--) {
            temp += a * pow(10, j);
        }
        sum += temp;
    }
    printf("s = %d", sum);

    return 0;
}
