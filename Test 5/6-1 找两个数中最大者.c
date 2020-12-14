#include <stdio.h>

int max(int a, int b);

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

int max(int a, int b) { return a > b ? a : b; }
