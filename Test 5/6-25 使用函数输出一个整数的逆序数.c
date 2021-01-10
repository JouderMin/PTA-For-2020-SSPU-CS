#include <stdio.h>

int reverse(int number);

int main(void) {
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

#include <math.h>

int reverse(int number) {
    int isPositive, i, output = 0, num[11];

    isPositive = (number >= 0);
    for (i = 0; i < 11 && number != 0; i++) {
        if (number % 10 < 0) {
            num[i] = -1 * number % 10;
        } else {
            num[i] = number % 10;
        }
        number /= 10;
    }
    for (int j = i - 1, a = 0; j >= 0; j--, a++) {
        output += num[j] * pow(10, a);
    }

    if (isPositive) {
        return output;
    } else {
        return -output;
    }
}
