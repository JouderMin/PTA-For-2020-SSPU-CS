#include <stdio.h>

int gcd(int x, int y);

int main(void) {
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd(int x, int y) {
    int t;

    if (x < y) {
        t = y;
        y = x;
        x = t;
    }
    
    return y == 0 ? x : gcd(y, x % y);
}
