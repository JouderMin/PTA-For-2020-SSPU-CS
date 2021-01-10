#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main(void) {
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) {
        printf("%d is a perfect number\n", m);
    }
    if (factorsum(n) == n) {
        printf("%d is a perfect number\n", n);
    }
    PrintPN(m, n);

    return 0;
}

#include <math.h>

int factorsum(int number) {
    int i = 1, sum = 0;

    while (i <= number / 2) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }

    return sum;
}

void PrintPN(int m, int n) {
    int num = m, a = 0, i = 2;

    while (num <= n) {
        if (factorsum(num) == num) {
            printf("%d = %d", num, 1);
            while (i <= num / 2) {
                if (num % i == 0) {
                    printf(" + ");
                    printf("%d", i);
                }
                i++;
            }
            printf("\n");
            a++;
            i = 2;
        }
        num++;
    }
    if (a == 0) {
        printf("No perfect number");
    }
}