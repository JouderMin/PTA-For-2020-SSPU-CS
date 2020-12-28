#include <math.h>
#include <stdio.h>

int main(void) {
    int flag = 1, i = 1;
    double sum = 0, n = 1.0, eps;

    scanf("%lf", &eps);
    if (eps >= 1) {
        printf("sum = %.6f", n);
    } else {
        while (fabs(n) > eps) {
            n   = flag * 1.0 / i;
            sum = sum + n;
            i += 3;
            flag = -flag;
        }
        printf("sum = %.6f", sum);
    }

    return 0;
}
