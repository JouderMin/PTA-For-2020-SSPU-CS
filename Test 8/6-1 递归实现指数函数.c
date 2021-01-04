#include <stdio.h>

double calc_pow(double x, int n);

int main(void) {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

#include <math.h>

double calc_pow(double x, int n) { return pow(x, n); }
