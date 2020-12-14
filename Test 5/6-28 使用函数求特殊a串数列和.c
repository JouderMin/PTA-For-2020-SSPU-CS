#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main(void) {
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

int fn(int a, int n) {
    int digit;

    if (n == 1) {
        digit = a;
    } else {
        digit = a;
        for (int i = 2; i <= n; i++) {
            digit = 10 * digit + a;
        }
    }

    return digit;
}

int SumA(int a, int n) {
    int sum = 0, i;

    for (i = 1; i <= n; i++) {
        sum = sum + fn(a, i);
    }

    return sum;
}
