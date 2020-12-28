#include <math.h>
#include <stdio.h>

int main(void) {
    int a, b, c;
    double area, s;

    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        s    = (a + b + c) / 2.0;
        area = pow(s * (s - a) * (s - b) * (s - c), 0.5);
        printf("area = %.2f; perimeter = %d.00\n", area, a + b + c);
    } else {
        printf("These sides do not correspond to a valid triangle\n");
    }

    return 0;
}
