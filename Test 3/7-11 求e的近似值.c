#include <stdio.h>

double fac(int n) {
    double r = 1;

    for (int i = n; i >= 1; i--) {
        r *= i;
    }

    return r;
}

int main(void) {
    double e = 1;
    int n, i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        e += 1.0 / fac(i);
    }
    printf("%.8f", e);

    return 0;
}
