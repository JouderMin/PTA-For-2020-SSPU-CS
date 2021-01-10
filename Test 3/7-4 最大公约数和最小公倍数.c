#include <stdio.h>

void swap(int * a, int * b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int gcd(int a, int b) {
    if (a < b) {
        swap(&a, &b);
    }

    return b == 0 ? a : gcd(b, a % b);
}

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d %d", gcd(a, b), a * b / gcd(a, b));

    return 0;
}
