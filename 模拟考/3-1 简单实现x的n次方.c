#include <stdio.h>

double mypow(double x, int n);

int main(void) {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

#include <math.h>

double mypow(double x, int n) {
    return pow(x, n);
}
