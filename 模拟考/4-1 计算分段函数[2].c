#include <math.h>
#include <stdio.h>

int main(void) {
    double result, x;

    scanf("%lf", &x);
    if (x >= 0) {
        result = pow(x, 0.5);
    } else {
        result = pow(x + 1, 2) + 2 * x + 1 / x;
    }

    printf("f(%.2f) = %.2f", x, result);

    return 0;
}
