#include <math.h>
#include <stdio.h>

int prime(int p);
int PrimeSum(int m, int n);

int main(void) {
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++) {
        if (prime(p) != 0) {
            printf("%d ", p);
        }
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p) {
    int i, k;

    if (p <= 1) {
        return 0;
    }
    k = (int)sqrt((double)p);
    for (i = 2; i <= k; i++) {
        if (p % i == 0) {
            break;
        }
    }
    if (i > k) {
        return 1;
    } else {
        return 0;
    }
}

int PrimeSum(int m, int n) {
    int sum = 0;

    for (int i = m; i <= n; i++) {
        if (prime(i)) {
            sum += i;
        }
    }

    return sum;
}
