#include <math.h>
#include <stdio.h>

double JC(int i) {
    double jc = 1;

    if (i == 0) {
        jc = 1;
    } else {
        int k;
        for (k = 1; k <= i; k++)
            jc = jc * k;
    }

    return jc;
}

int main(void) {
    double sum = 0;
    int n      = 0;
    double x, a;
    scanf("%lf", &x);

    do {
        a   = pow(x, n) / JC(n);
        sum = sum + a;
        n++;
    } while (a >= 0.00001);
    printf("%.4f\n", sum);

    return 0;
}
