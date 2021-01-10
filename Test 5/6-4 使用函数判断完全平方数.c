#include <math.h>
#include <stdio.h>

int IsSquare(int n);

int main(void) {
    int n;

    scanf("%d", &n);
    if (IsSquare(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

int IsSquare(int n) {
    int i = sqrt(n);

    if (pow(i, 2) == n) {
        return 1;
    } else {
        return 0;
    }
}
