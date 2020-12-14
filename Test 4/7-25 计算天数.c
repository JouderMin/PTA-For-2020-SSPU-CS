#include <stdio.h>

int main(void) {
    int y, m, d, days = 0;

    scanf("%d/%d/%d", &y, &m, &d);
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        a[1] = 29;
    for (int i = 0; i < m - 1; i++) {
        days += a[i];
    }
    days += d;
    printf("%d", days);

    return 0;
}
