#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main(void) {
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n) {
    int a = 1, b = 1, t, count = 2;

    if (n > 2) {
        while (count != n) {
            t = a;
            a = b;
            b = t + b;
            count++;
        }
    }

    return b;
}

void PrintFN(int m, int n) {
    int count = 0, a = 1, b = 1, t;

    while (b <= n) {
        if (b >= m) {
            if (b == 1) {
                printf("1 ");
            }
            if (count == 0) {
                printf("%d", b);
            } else {
                printf(" %d", b);
            }
            count++;
        }
        t = a;
        a = b;
        b = t + b;
    }
    if (count == 0) {
        printf("No Fibonacci number");
    }
}
