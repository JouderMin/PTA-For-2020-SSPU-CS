#include <stdio.h>

int main(void) {
    double eps, sum = 1, temp = 1;
    scanf("%le", &eps);

    for (int i = 1; temp > eps; i++) {
        temp = temp * i / (2 * i + 1);
        sum += temp;
    }
    printf("PI = %.5f\n", 2 * sum);

    return 0;
}