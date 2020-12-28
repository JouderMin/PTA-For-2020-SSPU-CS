#include <stdio.h>

int main(void) {
    int a, b, i, m, l = 0, sum = 0, num = 0;

    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        for (m = 1; m <= i; m++) {
            if (i % m != 0)
                l++;
        }
        if (l == i - 2) {
            sum = sum + i;
            num++;
        }
        l = 0;
    }
    printf("%d %d", num, sum);

    return 0;
}
